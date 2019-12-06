#pragma once

class ActorEventPacket : Packet {

public:
    virtual ~ActorEventPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ActorEventPacket(void);
    void ActorEventPacket(ActorRuntimeID, ActorEvent, int);
};
