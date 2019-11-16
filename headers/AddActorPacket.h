#pragma once

class AddActorPacket : Packet {

    virtual ~AddActorPacket();
    virtual ~AddActorPacket();
    virtual void getId(void)const;
    virtual void _ZNK14AddActorPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
