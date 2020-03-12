#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class ResourcePackChunkDataPacket : Packet {

public:
    virtual void getId()const;
    virtual std::string getName()const;
    ~ResourcePackChunkDataPacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ResourcePackChunkDataPacket(std::string const&, int, unsigned long, std::vector<unsigned char> const&);
    ResourcePackChunkDataPacket();
};
