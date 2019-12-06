#pragma once

class ShowStoreOfferPacket : Packet {

public:
    virtual ~ShowStoreOfferPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ShowStoreOfferPacket(void);
    void ShowStoreOfferPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
};
