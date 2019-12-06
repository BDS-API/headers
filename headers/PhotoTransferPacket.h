#pragma once

class PhotoTransferPacket : Packet {

public:
    virtual ~PhotoTransferPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void PhotoTransferPacket(void);
    void PhotoTransferPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void PhotoTransferPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&);
    void fromDisk(Core::Path, PhotoTransferPacket&);
};
