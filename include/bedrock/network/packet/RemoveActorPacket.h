#pragma once

class RemoveActorPacket : Packet {

public:
    virtual RemoveActorPacket::~RemoveActorPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    RemoveActorPacket(void);
    RemoveActorPacket(ActorUniqueID);
};
