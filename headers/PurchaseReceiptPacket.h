#pragma once

class PurchaseReceiptPacket : Packet {

public:
    virtual ~PurchaseReceiptPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void PurchaseReceiptPacket(void);
    void PurchaseReceiptPacket(std::vector<std::string, std::allocator<std::string>> const&);
    void PurchaseReceiptPacket(std::string const&);
};
