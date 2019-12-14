#pragma once

class ResourcePackChunkDataPacket : Packet {

public:
    virtual ~ResourcePackChunkDataPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ResourcePackChunkDataPacket(void);
    void ResourcePackChunkDataPacket(std::string const&, int, unsigned long, std::vector<unsigned char, std::allocator<unsigned char>> const&);
};
