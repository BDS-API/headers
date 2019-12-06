#pragma once

class PlayerSkinPacket : Packet {

public:
    virtual ~PlayerSkinPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void PlayerSkinPacket(void);
    void PlayerSkinPacket(mce::UUID, SerializedSkin const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
