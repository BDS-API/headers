#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class PlayerAuthInputPacket : Packet {

public:
    virtual PlayerAuthInputPacket::~PlayerAuthInputPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerAuthInputPacket(void);
    void getInput(PlayerAuthInputPacket::InputData)const;
    void setInput(PlayerAuthInputPacket::InputData, bool);
};
