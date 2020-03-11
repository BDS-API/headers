#pragma once

#include "../../../unmapped/SubClientConnectionRequest.h"
#include "../../io/BinaryStream.h"
#include "./SubClientLoginPacket.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include <string>


class SubClientLoginPacket : Packet {

public:
    virtual ~SubClientLoginPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching()const;

    SubClientLoginPacket();
    SubClientLoginPacket(SubClientConnectionRequest const&);
    SubClientLoginPacket(SubClientLoginPacket &&);
};
