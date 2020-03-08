#pragma once

#include "../../io/BinaryStream"
#include "../../util/Vec3"
#include "../../io/ReadOnlyBinaryStream"


class PlaySoundPacket : Packet {

public:
    virtual PlaySoundPacket::~PlaySoundPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlaySoundPacket(void);
    PlaySoundPacket(std::string, Vec3 const&, float, float);
};
