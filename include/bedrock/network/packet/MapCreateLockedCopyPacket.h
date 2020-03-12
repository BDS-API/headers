#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class MapCreateLockedCopyPacket : Packet {

public:
    virtual std::string getName()const;
    ~MapCreateLockedCopyPacket();
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    void getOriginalMapId()const;
    MapCreateLockedCopyPacket(ActorUniqueID, ActorUniqueID);
    MapCreateLockedCopyPacket();
    void getNewMapId()const;
};
