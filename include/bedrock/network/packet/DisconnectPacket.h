#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../io/BinaryStream.h"
#include <string>


class DisconnectPacket : Packet {

public:
    virtual ~DisconnectPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    DisconnectPacket();
    DisconnectPacket(std::string const&, bool);
};
