#pragma once

class ActorEventPacket : Packet {

    virtual void ActorEvent~ActorEventPacket();
    virtual void ActorEvent~ActorEventPacket();
    virtual void ActorEventgetId(void)const;
    virtual void _ZNK16ActorEventPacket7getNameB5cxx11Ev;
    virtual void ActorEventwrite(BinaryStream &)const;
    virtual void ActorEventread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
