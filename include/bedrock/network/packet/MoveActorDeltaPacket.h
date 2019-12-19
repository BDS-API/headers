#pragma once

class MoveActorDeltaPacket : Packet {

public:
    virtual MoveActorDeltaPacket::~MoveActorDeltaPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MoveActorDeltaPacket(void);
    MoveActorDeltaPacket(MoveActorDeltaData const&);
};
