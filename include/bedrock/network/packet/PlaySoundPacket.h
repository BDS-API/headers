#pragma once

#include <string>
#include "Packet.h"


class PlaySoundPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~PlaySoundPacket();
    PlaySoundPacket(std::string, Vec3 const&, float, float);
    PlaySoundPacket();
};
