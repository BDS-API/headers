#pragma once

class StopSoundPacket : Packet {

public:
    virtual ~StopSoundPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void StopSoundPacket(void);
    void StopSoundPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
};
