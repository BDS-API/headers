#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class ResourcePackChunkDataPacket : Packet {

public:
    ResourcePackChunkDataPacket::~ResourcePackChunkDataPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePackChunkDataPacket(void);
    ResourcePackChunkDataPacket(std::string const&, int, unsigned long, std::vector<unsigned char, std::allocator<unsigned char>> const&);
};
