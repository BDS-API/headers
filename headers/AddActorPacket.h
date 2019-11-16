#pragma once

class AddActorPacket : Packet {

    virtual void AddActorPacket::~AddActorPacket();
    virtual void AddActorPacket::~AddActorPacket();
    virtual void getId(void)const;
    virtual void _ZNK14AddActorPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
