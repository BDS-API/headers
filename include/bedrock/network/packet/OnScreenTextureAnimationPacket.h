#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class OnScreenTextureAnimationPacket : Packet {

public:
    virtual OnScreenTextureAnimationPacket::~OnScreenTextureAnimationPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    OnScreenTextureAnimationPacket(void);
    OnScreenTextureAnimationPacket(unsigned int);
};
