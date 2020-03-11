#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../io/BinaryStream.h"
#include "./Packet.h"


class SetDefaultGameTypePacket : Packet {

public:
    virtual ~SetDefaultGameTypePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetDefaultGameTypePacket();
//  SetDefaultGameTypePacket(GameType); //TODO: incomplete function definition
};
