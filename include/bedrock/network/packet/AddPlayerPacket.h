#pragma once

#include <string>
#include "Packet.h"


class AddPlayerPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~AddPlayerPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual std::string getName()const;
    AddPlayerPacket(Player &);
    AddPlayerPacket();
};
