#pragma once

class OnScreenTextureAnimationPacket : Packet {

public:
    virtual ~OnScreenTextureAnimationPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void OnScreenTextureAnimationPacket(void);
    void OnScreenTextureAnimationPacket(unsigned int);
};
