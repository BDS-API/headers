#pragma once

class GameRulesChangedPacket : Packet {

    virtual void GameRulesChangedPacket::~GameRulesChangedPacket();
    virtual void GameRulesChangedPacket::~GameRulesChangedPacket();
    virtual void getId(void)const;
    virtual void _ZNK22GameRulesChangedPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
