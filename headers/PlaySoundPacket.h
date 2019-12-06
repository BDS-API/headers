#pragma once

class PlaySoundPacket : Packet {

public:
    virtual ~PlaySoundPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void PlaySoundPacket(void);
    void PlaySoundPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, Vec3 const&, float, float);
};
