#pragma once

class CompletedUsingItemPacket : Packet {

    virtual ~CompletedUsingItemPacket();
    virtual ~CompletedUsingItemPacket();
    virtual void getId(void)const;
    virtual void _ZNK24CompletedUsingItemPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
