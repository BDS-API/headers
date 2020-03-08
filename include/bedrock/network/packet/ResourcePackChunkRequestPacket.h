#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class ResourcePackChunkRequestPacket : Packet {

public:
    ResourcePackChunkRequestPacket::~ResourcePackChunkRequestPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePackChunkRequestPacket(void);
    ResourcePackChunkRequestPacket(std::string const&, int);
};
