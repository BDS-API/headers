#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../util/Vec3"
#include "../../io/BinaryStream"


class PlaySoundPacket : Packet {

public:
    PlaySoundPacket::~PlaySoundPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlaySoundPacket(void);
    PlaySoundPacket(std::string, Vec3 const&, float, float);
};
