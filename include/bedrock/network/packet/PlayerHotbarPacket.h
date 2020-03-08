#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class PlayerHotbarPacket : Packet {

public:
    PlayerHotbarPacket::~PlayerHotbarPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerHotbarPacket(void);
    PlayerHotbarPacket(unsigned int, ContainerID, bool);
};
