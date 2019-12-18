#pragma once

class ActorFallPacket : Packet {

public:
    virtual ~ActorFallPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ActorFallPacket(void);
    void ActorFallPacket(ActorRuntimeID, float, bool);
};
