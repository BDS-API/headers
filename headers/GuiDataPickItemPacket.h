#pragma once

class GuiDataPickItemPacket : Packet {

public:
    virtual ~GuiDataPickItemPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void GuiDataPickItemPacket(void);
    void GuiDataPickItemPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int const&);
};
