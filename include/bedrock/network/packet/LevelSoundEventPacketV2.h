#pragma once

class LevelSoundEventPacketV2 : Packet {

public:
    virtual LevelSoundEventPacketV2::~LevelSoundEventPacketV2();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LevelSoundEventPacketV2(LevelSoundEvent, Vec3 const&, int, std::string const&, bool, bool);
    LevelSoundEventPacketV2(void);
};
