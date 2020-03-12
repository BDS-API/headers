#pragma once

#include <string>
#include "Packet.h"


class SetDefaultGameTypePacket : Packet {

public:
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    ~SetDefaultGameTypePacket();
//  SetDefaultGameTypePacket(GameType); //TODO: incomplete function definition
    SetDefaultGameTypePacket();
};
