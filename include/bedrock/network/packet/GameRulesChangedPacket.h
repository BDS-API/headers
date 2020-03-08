#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class GameRulesChangedPacket : Packet {

public:
    virtual GameRulesChangedPacket::~GameRulesChangedPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    GameRulesChangedPacket(void);
};
