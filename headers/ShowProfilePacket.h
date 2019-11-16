#pragma once

class ShowProfilePacket : Packet {

    virtual ~ShowProfilePacket();
    virtual ~ShowProfilePacket();
    virtual void getId(void)const;
    virtual void _ZNK17ShowProfilePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
