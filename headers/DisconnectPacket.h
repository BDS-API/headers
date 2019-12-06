#pragma once

class DisconnectPacket : Packet {

public:
    virtual ~DisconnectPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void DisconnectPacket(void);
    void DisconnectPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
};
