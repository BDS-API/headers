#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class TransferPacket : Packet {

public:
    virtual TransferPacket::~TransferPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    TransferPacket(void);
    TransferPacket(std::string const&, int);
};
