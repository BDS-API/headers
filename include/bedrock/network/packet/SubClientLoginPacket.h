#pragma once

#include <string>
#include "Packet.h"


class SubClientLoginPacket : Packet {

public:
    ~SubClientLoginPacket();
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching()const;
    SubClientLoginPacket(SubClientConnectionRequest const&);
    SubClientLoginPacket();
    SubClientLoginPacket(SubClientLoginPacket &&);
};
