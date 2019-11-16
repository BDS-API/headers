#pragma once

class NpcRequestPacket : Packet {

    virtual ~NpcRequestPacket();
    virtual ~NpcRequestPacket();
    virtual void getId(void)const;
    virtual void _ZNK16NpcRequestPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
