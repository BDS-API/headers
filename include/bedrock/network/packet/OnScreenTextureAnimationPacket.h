#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class OnScreenTextureAnimationPacket : Packet {

public:
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~OnScreenTextureAnimationPacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    OnScreenTextureAnimationPacket();
    OnScreenTextureAnimationPacket(unsigned int);
};
