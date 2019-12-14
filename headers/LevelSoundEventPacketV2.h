#pragma once

class LevelSoundEventPacketV2 : Packet {

public:
    virtual ~LevelSoundEventPacketV2();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void LevelSoundEventPacketV2(LevelSoundEvent, Vec3 const&, int, std::string const&, bool, bool);
    void LevelSoundEventPacketV2(void);
};
