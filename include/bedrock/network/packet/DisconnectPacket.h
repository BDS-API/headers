#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include <string>


class DisconnectPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~DisconnectPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual std::string getName()const;
    DisconnectPacket();
    DisconnectPacket(std::string const&, bool);
};
