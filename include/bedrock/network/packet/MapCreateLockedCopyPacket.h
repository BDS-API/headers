#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include <string>


class MapCreateLockedCopyPacket : Packet {

public:
    virtual ~MapCreateLockedCopyPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MapCreateLockedCopyPacket();
    MapCreateLockedCopyPacket(ActorUniqueID, ActorUniqueID);
    void getOriginalMapId()const;
    void getNewMapId()const;
};
