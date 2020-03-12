#pragma once

#include <string>
#include "Packet.h"


class PlayStatusPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~PlayStatusPacket();
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
//  PlayStatusPacket(PlayStatus); //TODO: incomplete function definition
    PlayStatusPacket();
};
