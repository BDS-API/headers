#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/SubClientConnectionRequest.h"
#include "Packet.h"


class SubClientLoginPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual void disallowBatching()const;
    ~SubClientLoginPacket();
    virtual std::string getName()const;
    SubClientLoginPacket(SubClientLoginPacket &&);
    SubClientLoginPacket();
    SubClientLoginPacket(SubClientConnectionRequest const&);
};
