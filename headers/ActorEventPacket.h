#pragma once

class ActorEventPacket : Packet {

    virtual ~ActorEventPacket();
    virtual ~ActorEventPacket();
    virtual void getId(void)const;
    virtual void _ZNK16ActorEventPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
