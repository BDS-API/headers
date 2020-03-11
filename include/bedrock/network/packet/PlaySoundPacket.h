#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "./Packet.h"
#include <string>


class PlaySoundPacket : Packet {

public:
    virtual ~PlaySoundPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlaySoundPacket();
    PlaySoundPacket(std::string, Vec3 const&, float, float);
};
