#pragma once

class SetActorMotionPacket : Packet {

public:
    virtual SetActorMotionPacket::~SetActorMotionPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetActorMotionPacket(void);
    SetActorMotionPacket(Actor const&);
};
