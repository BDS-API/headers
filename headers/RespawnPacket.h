#pragma once

class RespawnPacket : Packet {

    virtual void RespawnPacket::~RespawnPacket();
    virtual void RespawnPacket::~RespawnPacket();
    virtual void getId(void)const;
    virtual void _ZNK13RespawnPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
