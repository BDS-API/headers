#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../io/ReadOnlyBinaryStream"


class MapCreateLockedCopyPacket : Packet {

public:
    MapCreateLockedCopyPacket::~MapCreateLockedCopyPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MapCreateLockedCopyPacket(void);
    MapCreateLockedCopyPacket(ActorUniqueID, ActorUniqueID);
    void getOriginalMapId()const;
    void getNewMapId()const;
};
