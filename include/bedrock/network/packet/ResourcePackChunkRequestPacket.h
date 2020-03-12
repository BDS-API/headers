#pragma once

#include <string>
#include "Packet.h"


class ResourcePackChunkRequestPacket : Packet {

public:
    virtual void getId()const;
    virtual std::string getName()const;
    ~ResourcePackChunkRequestPacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ResourcePackChunkRequestPacket();
    ResourcePackChunkRequestPacket(std::string const&, int);
};
