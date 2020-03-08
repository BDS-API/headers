#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class PlayerHotbarPacket : Packet {

public:
    virtual PlayerHotbarPacket::~PlayerHotbarPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerHotbarPacket(void);
    PlayerHotbarPacket(unsigned int, ContainerID, bool);
};
