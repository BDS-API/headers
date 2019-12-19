#pragma once

class LevelSoundEventPacketV1 : Packet {

public:
    virtual LevelSoundEventPacketV1::~LevelSoundEventPacketV1();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LevelSoundEventPacketV1(LevelSoundEvent, Vec3 const&, int, ActorType, bool, bool);
    LevelSoundEventPacketV1(void);
};
