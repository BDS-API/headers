#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class GameRulesChangedPacket : Packet {

public:
    virtual GameRulesChangedPacket::~GameRulesChangedPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    GameRulesChangedPacket(void);
};
