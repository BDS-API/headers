#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/BinaryStream.h"
#include "../../../unmapped/ContentIdentity.h"
#include "../../block/unmapped/BlockPalette.h"
#include "../../util/Vec3.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../level/LevelSettings.h"
#include "../../util/Vec2.h"
#include "./Packet.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include <string>


class StartGamePacket : Packet {

public:
    virtual ~StartGamePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    StartGamePacket();
//  StartGamePacket(LevelSettings const&, ActorUniqueID, ActorRuntimeID, GameType, Vec3 const&, Vec2 const&, std::string const&, std::string const&, ContentIdentity const&, BlockPalette const&, std::string const&, bool, bool, unsigned long, int); //TODO: incomplete function definition
    void getLevelSettings()const;
    std::string getMultiplayerCorrelationId()const;
    void getBlockPaletteList()const;
    void getItemData()const;
};
