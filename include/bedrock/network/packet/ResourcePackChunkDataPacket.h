#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include <vector>
#include "Packet.h"


class ResourcePackChunkDataPacket : Packet {

public:
    ~ResourcePackChunkDataPacket();
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    ResourcePackChunkDataPacket(std::string const&, int, unsigned long, std::vector<unsigned char> const&);
    ResourcePackChunkDataPacket();
};
