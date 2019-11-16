#pragma once

class AddItemActorPacket : Packet {

    virtual ~AddItemActorPacket();
    virtual ~AddItemActorPacket();
    virtual void getId(void)const;
    virtual void _ZNK18AddItemActorPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
