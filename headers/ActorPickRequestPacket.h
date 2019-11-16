#pragma once

class ActorPickRequestPacket : Packet {

    virtual ~ActorPickRequestPacket();
    virtual ~ActorPickRequestPacket();
    virtual void getId(void)const;
    virtual void _ZNK22ActorPickRequestPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
