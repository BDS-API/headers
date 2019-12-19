#pragma once

class OnScreenTextureAnimationPacket : Packet {

public:
    virtual OnScreenTextureAnimationPacket::~OnScreenTextureAnimationPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    OnScreenTextureAnimationPacket(void);
    OnScreenTextureAnimationPacket(unsigned int);
};
