#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/ActorUniqueID"
#include "../../io/ReadOnlyBinaryStream"


class MapCreateLockedCopyPacket : Packet {

public:
    virtual MapCreateLockedCopyPacket::~MapCreateLockedCopyPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MapCreateLockedCopyPacket(void);
    MapCreateLockedCopyPacket(ActorUniqueID, ActorUniqueID);
    void getOriginalMapId(void)const;
    void getNewMapId(void)const;
};
