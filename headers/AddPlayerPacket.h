#pragma once

class AddPlayerPacket : Packet {

    virtual void AddPlayerPacket::~AddPlayerPacket();
    virtual void AddPlayerPacket::~AddPlayerPacket();
    virtual void getId(void)const;
    virtual void _ZNK15AddPlayerPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
