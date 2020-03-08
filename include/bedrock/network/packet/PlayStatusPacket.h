#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class PlayStatusPacket : Packet {

public:
    virtual PlayStatusPacket::~PlayStatusPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayStatusPacket(void);
    PlayStatusPacket(PlayStatus);
};
