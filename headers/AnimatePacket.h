#pragma once

class AnimatePacket : Packet {

public:
    virtual ~AnimatePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void AnimatePacket(void);
    void AnimatePacket(AnimatePacket::Action, ActorRuntimeID);
    void AnimatePacket(AnimatePacket::Action, ActorRuntimeID, float);
    void AnimatePacket(AnimatePacket::Action, Actor &);
};
