#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../actor/Player.h"
#include "./Packet.h"
#include <string>


class AddPlayerPacket : Packet {

public:
    virtual ~AddPlayerPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AddPlayerPacket();
    AddPlayerPacket(Player &);
};
