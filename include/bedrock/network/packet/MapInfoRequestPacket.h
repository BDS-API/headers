#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../io/ReadOnlyBinaryStream"


class MapInfoRequestPacket : Packet {

public:
    MapInfoRequestPacket::~MapInfoRequestPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MapInfoRequestPacket(void);
    MapInfoRequestPacket(ActorUniqueID);
    void getMapId()const;
};
