#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class SetActorDataPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ~SetActorDataPacket();
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    SetActorDataPacket(ActorRuntimeID, SynchedActorData &, bool);
    SetActorDataPacket();
    void getUnpackedData()const;
};
