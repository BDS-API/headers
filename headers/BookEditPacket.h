#pragma once

class BookEditPacket : Packet {

    virtual ~BookEditPacket();
    virtual ~BookEditPacket();
    virtual void getId(void)const;
    virtual void _ZNK14BookEditPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
