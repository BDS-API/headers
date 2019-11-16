#pragma once

class ResourcePacksInfoPacket : Packet {

    virtual ~ResourcePacksInfoPacket();
    virtual ~ResourcePacksInfoPacket();
    virtual void getId(void)const;
    virtual void _ZNK23ResourcePacksInfoPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
