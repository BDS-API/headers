#pragma once

class ResourcePackChunkDataPacket : Packet {

    virtual void ResourcePackChunkDataPacket::~ResourcePackChunkDataPacket();
    virtual void ResourcePackChunkDataPacket::~ResourcePackChunkDataPacket();
    virtual void getId(void)const;
    virtual void _ZNK27ResourcePackChunkDataPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
