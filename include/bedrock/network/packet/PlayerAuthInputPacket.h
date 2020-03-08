#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class PlayerAuthInputPacket : Packet {

public:
    virtual PlayerAuthInputPacket::~PlayerAuthInputPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerAuthInputPacket(void);
    void getInput(PlayerAuthInputPacket::InputData)const;
    void setInput(PlayerAuthInputPacket::InputData, bool);
};
