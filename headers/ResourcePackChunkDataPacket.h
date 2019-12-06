#pragma once

class ResourcePackChunkDataPacket : Packet {

public:
    virtual ~ResourcePackChunkDataPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ResourcePackChunkDataPacket(void);
    void ResourcePackChunkDataPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, unsigned long, std::vector<unsigned char, std::allocator<unsigned char>> const&);
};
