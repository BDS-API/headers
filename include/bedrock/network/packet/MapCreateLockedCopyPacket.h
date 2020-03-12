#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class MapCreateLockedCopyPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void getId()const;
    ~MapCreateLockedCopyPacket();
    virtual void read(ReadOnlyBinaryStream &);
    MapCreateLockedCopyPacket(ActorUniqueID, ActorUniqueID);
    void getNewMapId()const;
    MapCreateLockedCopyPacket();
    void getOriginalMapId()const;
};
