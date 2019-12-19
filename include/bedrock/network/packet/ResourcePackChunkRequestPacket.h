#pragma once

class ResourcePackChunkRequestPacket : Packet {

public:
    virtual ResourcePackChunkRequestPacket::~ResourcePackChunkRequestPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePackChunkRequestPacket(void);
    ResourcePackChunkRequestPacket(std::string const&, int);
};
