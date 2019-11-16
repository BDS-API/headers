#pragma once

class EventPacket : Packet {

    virtual void EventPacket::~EventPacket();
    virtual void EventPacket::~EventPacket();
    virtual void getId(void)const;
    virtual void _ZNK11EventPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
