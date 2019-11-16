#pragma once

class MoveActorDeltaPacket : Packet {

    virtual void MoveActorDeltaPacket::~MoveActorDeltaPacket();
    virtual void MoveActorDeltaPacket::~MoveActorDeltaPacket();
    virtual void getId(void)const;
    virtual void _ZNK20MoveActorDeltaPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
