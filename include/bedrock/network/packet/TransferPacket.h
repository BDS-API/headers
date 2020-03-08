#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class TransferPacket : Packet {

public:
    TransferPacket::~TransferPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    TransferPacket(void);
    TransferPacket(std::string const&, int);
};
