#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class PlayStatusPacket : Packet {

public:
    ~PlayStatusPacket();
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
//  PlayStatusPacket(PlayStatus); //TODO: incomplete function definition
    PlayStatusPacket();
};
