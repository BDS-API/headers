#pragma once

#include <string>
#include "Packet.h"


class PlayerHotbarPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~PlayerHotbarPacket();
    virtual std::string getName()const;
    virtual void getId()const;
//  PlayerHotbarPacket(unsigned int, ContainerID, bool); //TODO: incomplete function definition
    PlayerHotbarPacket();
};
