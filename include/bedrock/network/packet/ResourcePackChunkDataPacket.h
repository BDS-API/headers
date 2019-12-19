#pragma once

class ResourcePackChunkDataPacket : Packet {

public:
    virtual ResourcePackChunkDataPacket::~ResourcePackChunkDataPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePackChunkDataPacket(void);
    ResourcePackChunkDataPacket(std::string const&, int, unsigned long, std::vector<unsigned char, std::allocator<unsigned char>> const&);
};
