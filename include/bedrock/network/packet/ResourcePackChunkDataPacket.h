#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <memory>
#include "./Packet.h"
#include <vector>
#include <string>


class ResourcePackChunkDataPacket : Packet {

public:
    virtual ~ResourcePackChunkDataPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePackChunkDataPacket();
    ResourcePackChunkDataPacket(std::string const&, int, unsigned long, std::vector<unsigned char, std::allocator<unsigned char>> const&);
};
