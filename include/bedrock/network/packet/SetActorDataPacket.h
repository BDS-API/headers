#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/SynchedActorData.h"
#include "./Packet.h"
#include <string>


class SetActorDataPacket : Packet {

public:
    virtual ~SetActorDataPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetActorDataPacket();
    SetActorDataPacket(ActorRuntimeID, SynchedActorData &, bool);
    void getUnpackedData()const;
};
