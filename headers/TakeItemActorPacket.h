#pragma once

class TakeItemActorPacket : Packet {

    virtual ~TakeItemActorPacket();
    virtual ~TakeItemActorPacket();
    virtual void getId(void)const;
    virtual void _ZNK19TakeItemActorPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
