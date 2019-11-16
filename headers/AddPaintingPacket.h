#pragma once

class AddPaintingPacket : Packet {

    virtual ~AddPaintingPacket();
    virtual ~AddPaintingPacket();
    virtual void getId(void)const;
    virtual void _ZNK17AddPaintingPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
