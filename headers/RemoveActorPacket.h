#pragma once

class RemoveActorPacket : Packet {

    virtual ~RemoveActorPacket();
    virtual ~RemoveActorPacket();
    virtual void getId(void)const;
    virtual void _ZNK17RemoveActorPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
