#pragma once

class ResourcePackChunkRequestPacket : Packet {

    virtual void ResourcePackChunkRequestPacket::~ResourcePackChunkRequestPacket();
    virtual void ResourcePackChunkRequestPacket::~ResourcePackChunkRequestPacket();
    virtual void getId(void)const;
    virtual void _ZNK30ResourcePackChunkRequestPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
