#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class PlayerHotbarPacket : Packet {

public:
    ~PlayerHotbarPacket();
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
//  PlayerHotbarPacket(unsigned int, ContainerID, bool); //TODO: incomplete function definition
    PlayerHotbarPacket();
};
