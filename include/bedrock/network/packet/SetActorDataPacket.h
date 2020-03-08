#pragma once

#include "../../../unmapped/SynchedActorData"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/BinaryStream"


class SetActorDataPacket : Packet {

public:
    SetActorDataPacket::~SetActorDataPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetActorDataPacket(void);
    SetActorDataPacket(ActorRuntimeID, SynchedActorData &, bool);
    void getUnpackedData()const;
};
