#pragma once

#include <string>
#include "Packet.h"


class DisconnectPacket : Packet {

public:
    ~DisconnectPacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    DisconnectPacket();
    DisconnectPacket(std::string const&, bool);
};
