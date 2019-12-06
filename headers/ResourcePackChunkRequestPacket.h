#pragma once

class ResourcePackChunkRequestPacket : Packet {

public:
    virtual ~ResourcePackChunkRequestPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ResourcePackChunkRequestPacket(void);
    void ResourcePackChunkRequestPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
