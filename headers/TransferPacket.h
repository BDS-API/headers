#pragma once

class TransferPacket : Packet {

public:
    virtual ~TransferPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void TransferPacket(void);
    void TransferPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
