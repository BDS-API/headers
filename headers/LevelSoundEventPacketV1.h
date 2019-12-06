#pragma once

class LevelSoundEventPacketV1 : Packet {

public:
    virtual ~LevelSoundEventPacketV1();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void LevelSoundEventPacketV1(LevelSoundEvent, Vec3 const&, int, ActorType, bool, bool);
    void LevelSoundEventPacketV1(void);
};
