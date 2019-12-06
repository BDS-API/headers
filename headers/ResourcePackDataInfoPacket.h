#pragma once

class ResourcePackDataInfoPacket : Packet {

public:
    virtual ~ResourcePackDataInfoPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ResourcePackDataInfoPacket(void);
    void ResourcePackDataInfoPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned int, int, unsigned long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, PackType);
};
