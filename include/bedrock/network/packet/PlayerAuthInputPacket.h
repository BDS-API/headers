#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class PlayerAuthInputPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    ~PlayerAuthInputPacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void getId()const;
    PlayerAuthInputPacket();
//  void getInput(PlayerAuthInputPacket::InputData)const; //TODO: incomplete function definition
//  void setInput(PlayerAuthInputPacket::InputData, bool); //TODO: incomplete function definition
};
