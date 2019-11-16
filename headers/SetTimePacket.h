#pragma once

class SetTimePacket : Packet {

    virtual ~SetTimePacket();
    virtual ~SetTimePacket();
    virtual void getId(void)const;
    virtual void _ZNK13SetTimePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
