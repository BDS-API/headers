#pragma once

#include <string>
#include "Packet.h"


class SetPlayerGameTypePacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void getId()const;
    ~SetPlayerGameTypePacket();
    virtual void write(BinaryStream &)const;
//  SetPlayerGameTypePacket(GameType); //TODO: incomplete function definition
    SetPlayerGameTypePacket();
};
