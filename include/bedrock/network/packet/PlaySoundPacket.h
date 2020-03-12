#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../util/Vec3.h"
#include "Packet.h"


class PlaySoundPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void getId()const;
    ~PlaySoundPacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    PlaySoundPacket();
    PlaySoundPacket(std::string, Vec3 const&, float, float);
};
