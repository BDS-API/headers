#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class StartGamePacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~StartGamePacket();
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    std::string getMultiplayerCorrelationId()const;
    void getItemData()const;
    StartGamePacket();
    void getLevelSettings()const;
//  StartGamePacket(LevelSettings const&, ActorUniqueID, ActorRuntimeID, GameType, Vec3 const&, Vec2 const&, std::string const&, std::string const&, ContentIdentity const&, BlockPalette const&, std::string const&, bool, bool, unsigned long, int); //TODO: incomplete function definition
    void getBlockPaletteList()const;
};
