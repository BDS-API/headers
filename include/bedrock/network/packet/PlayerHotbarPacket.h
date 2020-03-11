#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../io/BinaryStream.h"
#include "./Packet.h"


class PlayerHotbarPacket : Packet {

public:
    virtual ~PlayerHotbarPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerHotbarPacket();
//  PlayerHotbarPacket(unsigned int, ContainerID, bool); //TODO: incomplete function definition
};
