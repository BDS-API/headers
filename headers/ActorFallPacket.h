#pragma once

class ActorFallPacket : Packet {

    virtual ~ActorFallPacket();
    virtual ~ActorFallPacket();
    virtual void getId(void)const;
    virtual void _ZNK15ActorFallPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
