#pragma once

class SetTitlePacket : Packet {

public:
    virtual ~SetTitlePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SetTitlePacket(void);
    void SetTitlePacket(SetTitlePacket::TitleType);
    void SetTitlePacket(SetTitlePacket::TitleType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void SetTitlePacket(SetTitlePacket::TitleType, TextObjectRoot const&);
    void SetTitlePacket(int, int, int);
};
