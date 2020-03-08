#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/Vec3"


class PlaySoundPacket : Packet {

public:
    virtual PlaySoundPacket::~PlaySoundPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlaySoundPacket(void);
    PlaySoundPacket(std::string, Vec3 const&, float, float);
};
