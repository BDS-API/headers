#pragma once

#include "../../level/LevelSettings"
#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class StartGamePacket : Packet {

public:
    virtual StartGamePacket::~StartGamePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    StartGamePacket(void);
    StartGamePacket(LevelSettings const&, ActorUniqueID, ActorRuntimeID, GameType, Vec3 const&, Vec2 const&, std::string const&, std::string const&, ContentIdentity const&, BlockPalette const&, std::string const&, bool, bool, unsigned long, int);
    void getLevelSettings(void)const;
    void getBlockPaletteList(void)const;
    void getItemData(void)const;
};
