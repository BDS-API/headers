#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../actor/Player.h"
#include "Packet.h"


class AddPlayerPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ~AddPlayerPacket();
    virtual void getId()const;
    AddPlayerPacket();
    AddPlayerPacket(Player &);
};
