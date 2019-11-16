#pragma once

class ResourcePackStackPacket : Packet {

    virtual void ResourcePackStackPacket::~ResourcePackStackPacket();
    virtual void ResourcePackStackPacket::~ResourcePackStackPacket();
    virtual void getId(void)const;
    virtual void _ZNK23ResourcePackStackPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
