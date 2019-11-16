#pragma once

class SimpleEventPacket : Packet {

    virtual ~SimpleEventPacket();
    virtual ~SimpleEventPacket();
    virtual void getId(void)const;
    virtual void _ZNK17SimpleEventPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
