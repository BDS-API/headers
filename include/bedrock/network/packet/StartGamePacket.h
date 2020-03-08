#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../level/LevelSettings"
#include "../../../unmapped/ContentIdentity"
#include "../../util/Vec3"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../util/Vec2"
#include "../../block/unmapped/BlockPalette"


class StartGamePacket : Packet {

public:
    virtual StartGamePacket::~StartGamePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    StartGamePacket(void);
    StartGamePacket(LevelSettings const&, ActorUniqueID, ActorRuntimeID, GameType, Vec3 const&, Vec2 const&, std::string const&, std::string const&, ContentIdentity const&, BlockPalette const&, std::string const&, bool, bool, unsigned long, int);
    void getLevelSettings()const;
    void getBlockPaletteList()const;
    void getItemData()const;
};
