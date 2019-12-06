#pragma once

class ShowProfilePacket : Packet {

public:
    virtual ~ShowProfilePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ShowProfilePacket(void);
    void ShowProfilePacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
