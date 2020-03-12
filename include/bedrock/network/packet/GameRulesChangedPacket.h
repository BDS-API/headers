#pragma once

#include <string>
#include "Packet.h"


class GameRulesChangedPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    ~GameRulesChangedPacket();
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual std::string getName()const;
    GameRulesChangedPacket();
};
