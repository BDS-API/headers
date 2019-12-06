#pragma once

class LevelSoundEventPacketV2 : Packet {

public:
    virtual ~LevelSoundEventPacketV2();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void LevelSoundEventPacketV2(LevelSoundEvent, Vec3 const&, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, bool);
    void LevelSoundEventPacketV2(void);
};
