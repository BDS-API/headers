#pragma once

#include <string>
#include "Packet.h"


class OnScreenTextureAnimationPacket : Packet {

public:
    ~OnScreenTextureAnimationPacket(); // _ZN30OnScreenTextureAnimationPacketD2Ev
    virtual void getId()const; // _ZNK30OnScreenTextureAnimationPacket5getIdEv
    virtual std::string getName()const; // _ZNK30OnScreenTextureAnimationPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK30OnScreenTextureAnimationPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN30OnScreenTextureAnimationPacket4readER20ReadOnlyBinaryStream
    OnScreenTextureAnimationPacket(); // _ZN30OnScreenTextureAnimationPacketC2Ev
    OnScreenTextureAnimationPacket(unsigned int); // _ZN30OnScreenTextureAnimationPacketC2Ej
};
