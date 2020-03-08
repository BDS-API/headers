#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorUniqueID"


class MapInfoRequestPacket : Packet {

public:
    virtual MapInfoRequestPacket::~MapInfoRequestPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MapInfoRequestPacket(void);
    MapInfoRequestPacket(ActorUniqueID);
    void getMapId()const;
};
