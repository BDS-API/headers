#pragma once

class LevelSoundEventPacket : Packet {

public:
    virtual ~LevelSoundEventPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void LevelSoundEventPacket(LevelSoundEvent, Vec3 const&, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, bool);
    void LevelSoundEventPacket(void);
};
