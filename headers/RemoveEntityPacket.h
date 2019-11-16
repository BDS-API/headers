#pragma once

class RemoveEntityPacket : EntityServerPacket {

    virtual void ~RemoveEntityPacket();
    virtual void ~RemoveEntityPacket();
    virtual void getId(void)const;
    virtual void _ZNK18RemoveEntityPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void Packet::disallowBatching(void)const;
}
