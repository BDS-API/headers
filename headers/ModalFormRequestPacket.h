#pragma once

class ModalFormRequestPacket : Packet {

public:
    virtual ~ModalFormRequestPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ModalFormRequestPacket(void);
    void ModalFormRequestPacket(unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
