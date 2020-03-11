#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../io/BinaryStream.h"
#include "./Packet.h"


class SetPlayerGameTypePacket : Packet {

public:
    virtual ~SetPlayerGameTypePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetPlayerGameTypePacket();
//  SetPlayerGameTypePacket(GameType); //TODO: incomplete function definition
};
