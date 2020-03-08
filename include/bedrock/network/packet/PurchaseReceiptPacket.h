#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class PurchaseReceiptPacket : Packet {

public:
    PurchaseReceiptPacket::~PurchaseReceiptPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PurchaseReceiptPacket(void);
    PurchaseReceiptPacket(std::vector<std::string, std::allocator<std::string>> const&);
    PurchaseReceiptPacket(std::string const&);
};
