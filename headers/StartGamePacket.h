#pragma once

class StartGamePacket : Packet {

public:
    virtual ~StartGamePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void StartGamePacket(void);
    void StartGamePacket(LevelSettings const&, ActorUniqueID, ActorRuntimeID, GameType, Vec3 const&, Vec2 const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ContentIdentity const&, BlockPalette const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, bool, unsigned long, int);
    void getLevelSettings(void)const;
    void getBlockPaletteList(void)const;
    void getItemData(void)const;
};
