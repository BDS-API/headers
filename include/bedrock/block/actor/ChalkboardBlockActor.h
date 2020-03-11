#pragma once

#include <string>
#include "./BlockActor.h"
#include "../../nbt/CompoundTag.h"
#include "../../actor/Actor.h"
#include <memory>
#include "../../level/Level.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/CachedMessageData.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../unmapped/BlockSource.h"
#include <vector>
#include "../../text/TextObjectRoot.h"
#include "../../actor/Player.h"


class ChalkboardBlockActor : BlockActor {

public:
    virtual ~ChalkboardBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void getShadowRadius(BlockSource &)const;
    virtual std::string getImmersiveReaderText(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    ChalkboardBlockActor(BlockPos const&);
    bool isBaseChalkboard()const;
    void setText(std::string const&, TextObjectRoot &&);
    void setText(std::string const&);
    std::string getText()const;
    std::string getUnfilteredText()const;
    void _flagCachedMessageAsDirty();
    void getRotation(BlockSource &)const;
    void setOnGround(bool);
    bool isOnGround()const;
//  void setChalkboardSize(ChalkboardSize); //TODO: incomplete function definition
    void getChalkboardSize()const;
    void getBaseChalkboard(BlockSource &)const;
    void setBasePos(BlockPos const&);
    void setOwnerId(ActorUniqueID);
    void getOwnerId()const;
//  void calculateAllBlocks(BlockPos const&, ChalkboardSize, int); //TODO: incomplete function definition
    void setLocked(bool);
    void getLocked()const;
    void getTextCharCount()const;
    void _isBaseEntity()const;
    void getWidth()const;
    void getHeight()const;
    void convertFromEntity(BlockSource &, CompoundTag const&);
//  void createChalkboard(Actor *, BlockSource &, BlockPos const&, ChalkboardSize, int, bool, std::string); //TODO: incomplete function definition
//  bool canCreateChalkboard(Actor *, BlockSource &, BlockPos const&, ChalkboardSize, int, std::vector<BlockPos, std::allocator<BlockPos>> &); //TODO: incomplete function definition
    void playerMayEdit(Player &)const;
    void _isOwner(Player &)const;
    void playerMayToggleLock(Player &)const;
    void playerMayDestroy(Player &)const;
    void getCachedMessage()const;
    void setCachedMessage(ChalkboardBlockActor::CachedMessageData);
};
