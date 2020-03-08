#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ResourcePackChunkDataPacket : Packet {

public:
    virtual ResourcePackChunkDataPacket::~ResourcePackChunkDataPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePackChunkDataPacket(void);
    ResourcePackChunkDataPacket(std::string const&, int, unsigned long, std::vector<unsigned char, std::allocator<unsigned char>> const&);
};
