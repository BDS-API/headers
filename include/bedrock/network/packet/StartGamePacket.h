#pragma once

#include "../../block/unmapped/BlockPalette"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../../unmapped/ContentIdentity"
#include "../../util/Vec2"
#include "../../util/Vec3"
#include "../../io/BinaryStream"
#include "../../level/LevelSettings"


class StartGamePacket : Packet {

public:
    StartGamePacket::~StartGamePacket()
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
