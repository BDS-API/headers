#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../../unmapped/SynchedActorData.h"
#include "Packet.h"


class SetActorDataPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ~SetActorDataPacket();
    SetActorDataPacket(ActorRuntimeID, SynchedActorData &, bool);
    SetActorDataPacket();
    void getUnpackedData()const;
};
