#pragma once

class GameRulesChangedPacket : Packet {

public:
    virtual ~GameRulesChangedPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void GameRulesChangedPacket(void);
};
