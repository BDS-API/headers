#pragma once

class AvailableActorIdentifiersPacket : Packet {

    virtual ~AvailableActorIdentifiersPacket();
    virtual ~AvailableActorIdentifiersPacket();
    virtual void getId(void)const;
    virtual void _ZNK31AvailableActorIdentifiersPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
