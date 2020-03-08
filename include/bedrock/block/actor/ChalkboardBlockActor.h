#pragma once

#include "../unmapped/BlockSource"
#include "../../actor/Actor"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../../unmapped/CachedMessageData"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../../unmapped/DataLoadHelper"
#include "../../text/TextObjectRoot"


class ChalkboardBlockActor : BlockActor {

public:
    virtual ChalkboardBlockActor::~ChalkboardBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void getShadowRadius(BlockSource &)const;
    virtual void getImmersiveReaderText(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    ChalkboardBlockActor(BlockPos const&);
    bool isBaseChalkboard()const;
    void setText(std::string const&, TextObjectRoot &&);
    void setText(std::string const&);
    void _flagCachedMessageAsDirty();
    void getRotation(BlockSource &)const;
    void setOnGround(bool);
    bool isOnGround()const;
    void setChalkboardSize(ChalkboardSize);
    void getChalkboardSize()const;
    void getBaseChalkboard(BlockSource &)const;
    void setBasePos(BlockPos const&);
    void setOwnerId(ActorUniqueID);
    void getOwnerId()const;
    void calculateAllBlocks(BlockPos const&, ChalkboardSize, int);
    void setLocked(bool);
    void getLocked()const;
    void getTextCharCount()const;
    void _isBaseEntity()const;
    void getWidth()const;
    void getHeight()const;
    void convertFromEntity(BlockSource &, CompoundTag const&);
    void createChalkboard(Actor *, BlockSource &, BlockPos const&, ChalkboardSize, int, bool, std::string);
    bool canCreateChalkboard(Actor *, BlockSource &, BlockPos const&, ChalkboardSize, int, std::vector<BlockPos, std::allocator<BlockPos>> &);
    void playerMayEdit(Player &)const;
    void _isOwner(Player &)const;
    void playerMayToggleLock(Player &)const;
    void playerMayDestroy(Player &)const;
    void getCachedMessage()const;
    void setCachedMessage(ChalkboardBlockActor::CachedMessageData);
};
