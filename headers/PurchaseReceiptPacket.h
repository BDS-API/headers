#pragma once

class PurchaseReceiptPacket : Packet {

public:
    virtual ~PurchaseReceiptPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void PurchaseReceiptPacket(void);
    void PurchaseReceiptPacket(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    void PurchaseReceiptPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
