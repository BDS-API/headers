#pragma once

class TakeItemActorPacket : Packet {

public:
    virtual ~TakeItemActorPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void TakeItemActorPacket(void);
    void TakeItemActorPacket(ActorRuntimeID, ActorRuntimeID);
};
