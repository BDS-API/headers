#pragma once

class LevelSoundEventPacket : Packet {

public:
    virtual ~LevelSoundEventPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void LevelSoundEventPacket(LevelSoundEvent, Vec3 const&, int, std::string const&, bool, bool);
    void LevelSoundEventPacket(void);
};
