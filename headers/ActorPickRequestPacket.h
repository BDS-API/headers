#pragma once

class ActorPickRequestPacket : Packet {

    virtual void ActorPickRequest~ActorPickRequestPacket();
    virtual void ActorPickRequest~ActorPickRequestPacket();
    virtual void ActorPickRequestgetId(void)const;
    virtual void _ZNK22ActorPickRequestPacket7getNameB5cxx11Ev;
    virtual void ActorPickRequestwrite(BinaryStream &)const;
    virtual void ActorPickRequestread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
