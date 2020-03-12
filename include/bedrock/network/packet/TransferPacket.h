#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include <string>


class TransferPacket : Packet {

public:
    ~TransferPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    TransferPacket();
    TransferPacket(std::string const&, int);
};
