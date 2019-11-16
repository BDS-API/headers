#pragma once

class ChangeDimensionPacket : Packet {

    virtual ~ChangeDimensionPacket();
    virtual ~ChangeDimensionPacket();
    virtual void getId(void)const;
    virtual void _ZNK21ChangeDimensionPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
