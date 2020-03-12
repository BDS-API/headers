#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../util/Vec3.h"
#include "../../block/unmapped/BlockPalette.h"
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../util/Vec2.h"
#include "../../level/LevelSettings.h"
#include "../../../unmapped/ContentIdentity.h"
#include "Packet.h"


class StartGamePacket : Packet {

public:
    virtual void getId()const;
    virtual std::string getName()const;
    ~StartGamePacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
//  StartGamePacket(LevelSettings const&, ActorUniqueID, ActorRuntimeID, GameType, Vec3 const&, Vec2 const&, std::string const&, std::string const&, ContentIdentity const&, BlockPalette const&, std::string const&, bool, bool, unsigned long, int); //TODO: incomplete function definition
    void getBlockPaletteList()const;
    std::string getMultiplayerCorrelationId()const;
    void getItemData()const;
    void getLevelSettings()const;
    StartGamePacket();
};
