#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class PlayerAuthInputPacket : Packet {

public:
    PlayerAuthInputPacket::~PlayerAuthInputPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerAuthInputPacket(void);
    void getInput(PlayerAuthInputPacket::InputData)const;
    void setInput(PlayerAuthInputPacket::InputData, bool);
};
