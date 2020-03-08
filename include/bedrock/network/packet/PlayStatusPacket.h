#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class PlayStatusPacket : Packet {

public:
    virtual PlayStatusPacket::~PlayStatusPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayStatusPacket(void);
    PlayStatusPacket(PlayStatus);
};
