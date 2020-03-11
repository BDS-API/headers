#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../io/BinaryStream.h"
#include <string>


class ResourcePackChunkRequestPacket : Packet {

public:
    virtual ~ResourcePackChunkRequestPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePackChunkRequestPacket();
    ResourcePackChunkRequestPacket(std::string const&, int);
};
