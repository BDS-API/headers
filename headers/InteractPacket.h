#pragma once

class InteractPacket : Packet {

    virtual void InteractPacket::~InteractPacket();
    virtual void InteractPacket::~InteractPacket();
    virtual void getId(void)const;
    virtual void _ZNK14InteractPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
