#pragma once

class EntityServerPacket : Packet {

    virtual ~EntityServerPacket();
    virtual ~EntityServerPacket();
    virtual void getId(void)const;
    virtual void _ZNK18EntityServerPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
