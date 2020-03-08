#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/SynchedActorData"


class SetActorDataPacket : Packet {

public:
    virtual SetActorDataPacket::~SetActorDataPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetActorDataPacket(void);
    SetActorDataPacket(ActorRuntimeID, SynchedActorData &, bool);
    void getUnpackedData()const;
};
