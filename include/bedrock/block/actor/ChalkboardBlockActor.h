#pragma once

#include "../../../unmapped/BlockPos"
#include "../../level/Level"
#include "../../../unmapped/ActorUniqueID"
#include "../../../unmapped/BlockSource"
#include "../../actor/Actor"
#include "../../actor/Player"
#include "../../nbt/CompoundTag"
#include "../../../unmapped/CachedMessageData"


class ChalkboardBlockActor : BlockActor {

public:
    virtual ChalkboardBlockActor::~ChalkboardBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void getShadowRadius(BlockSource &)const;
    virtual void getImmersiveReaderText[abi:cxx11](BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    ChalkboardBlockActor(BlockPos const&);
    bool isBaseChalkboard(void)const;
    void setText(std::string const&, TextObjectRoot &&);
    void setText(std::string const&);
    void _flagCachedMessageAsDirty(void);
    void getRotation(BlockSource &)const;
    void setOnGround(bool);
    bool isOnGround(void)const;
    void setChalkboardSize(ChalkboardSize);
    void getChalkboardSize(void)const;
    void getBaseChalkboard(BlockSource &)const;
    void setBasePos(BlockPos const&);
    void setOwnerId(ActorUniqueID);
    void getOwnerId(void)const;
    void calculateAllBlocks(BlockPos const&, ChalkboardSize, int);
    void setLocked(bool);
    void getLocked(void)const;
    void getTextCharCount(void)const;
    void _isBaseEntity(void)const;
    void getWidth(void)const;
    void getHeight(void)const;
    void convertFromEntity(BlockSource &, CompoundTag const&);
    void createChalkboard(Actor *, BlockSource &, BlockPos const&, ChalkboardSize, int, bool, std::string);
    bool canCreateChalkboard(Actor *, BlockSource &, BlockPos const&, ChalkboardSize, int, std::vector<BlockPos, std::allocator<BlockPos>> &);
    void playerMayEdit(Player &)const;
    void _isOwner(Player &)const;
    void playerMayToggleLock(Player &)const;
    void playerMayDestroy(Player &)const;
    void getCachedMessage(void)const;
    void setCachedMessage(ChalkboardBlockActor::CachedMessageData);
};
