#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/Vec3"


class LevelSoundEventPacket : Packet {

public:
    virtual LevelSoundEventPacket::~LevelSoundEventPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LevelSoundEventPacket(LevelSoundEvent, Vec3 const&, int, std::string const&, bool, bool);
    LevelSoundEventPacket(void);
};
