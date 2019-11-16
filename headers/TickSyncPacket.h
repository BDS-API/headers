#pragma once

class TickSyncPacket : Packet {

    virtual ~TickSyncPacket();
    virtual ~TickSyncPacket();
    virtual void getId(void)const;
    virtual void _ZNK14TickSyncPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
