#pragma once

#include <string>
#include "Packet.h"


class OnScreenTextureAnimationPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~OnScreenTextureAnimationPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    OnScreenTextureAnimationPacket(unsigned int);
    OnScreenTextureAnimationPacket();
};
