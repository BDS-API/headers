#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorUniqueID"


class MapCreateLockedCopyPacket : Packet {

public:
    virtual MapCreateLockedCopyPacket::~MapCreateLockedCopyPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MapCreateLockedCopyPacket(void);
    MapCreateLockedCopyPacket(ActorUniqueID, ActorUniqueID);
    void getOriginalMapId()const;
    void getNewMapId()const;
};
