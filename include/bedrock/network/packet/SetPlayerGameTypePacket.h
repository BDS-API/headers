#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class SetPlayerGameTypePacket : Packet {

public:
    virtual void getId()const;
    ~SetPlayerGameTypePacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    SetPlayerGameTypePacket();
//  SetPlayerGameTypePacket(GameType); //TODO: incomplete function definition
};
