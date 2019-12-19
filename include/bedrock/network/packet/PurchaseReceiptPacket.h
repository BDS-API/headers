#pragma once

class PurchaseReceiptPacket : Packet {

public:
    virtual PurchaseReceiptPacket::~PurchaseReceiptPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PurchaseReceiptPacket(void);
    PurchaseReceiptPacket(std::vector<std::string, std::allocator<std::string>> const&);
    PurchaseReceiptPacket(std::string const&);
};
