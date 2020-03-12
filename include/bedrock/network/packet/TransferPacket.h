#pragma once

#include <string>
#include "Packet.h"


class TransferPacket : Packet {

public:
    virtual void getId()const;
    ~TransferPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    TransferPacket();
    TransferPacket(std::string const&, int);
};
