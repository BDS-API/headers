#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class SetDefaultGameTypePacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    ~SetDefaultGameTypePacket();
    virtual void getId()const;
//  SetDefaultGameTypePacket(GameType); //TODO: incomplete function definition
    SetDefaultGameTypePacket();
};
