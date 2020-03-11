#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../io/BinaryStream.h"
#include "./Packet.h"


class PlayerAuthInputPacket : Packet {

public:
    virtual ~PlayerAuthInputPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerAuthInputPacket();
//  void getInput(PlayerAuthInputPacket::InputData)const; //TODO: incomplete function definition
//  void setInput(PlayerAuthInputPacket::InputData, bool); //TODO: incomplete function definition
};
