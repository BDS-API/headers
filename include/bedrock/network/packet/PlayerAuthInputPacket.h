#pragma once

#include <string>
#include "Packet.h"


class PlayerAuthInputPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ~PlayerAuthInputPacket();
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
//  void getInput(PlayerAuthInputPacket::InputData)const; //TODO: incomplete function definition
//  void setInput(PlayerAuthInputPacket::InputData, bool); //TODO: incomplete function definition
    PlayerAuthInputPacket();
};
