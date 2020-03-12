#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include <string>


class ResourcePackChunkRequestPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~ResourcePackChunkRequestPacket();
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    ResourcePackChunkRequestPacket();
    ResourcePackChunkRequestPacket(std::string const&, int);
};
