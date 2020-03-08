#pragma once

#include "../../actor/Actor"
#include "../../../unmapped/DataLoadHelper"
#include "../../util/Vec3"
#include "../../util/BlockPos"
#include "../../util/AABB"
#include "../unmapped/BlockSource"
#include "../../../unmapped/Block"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class PistonBlockActor : BlockActor {

public:
    static long ARM_ANIMATION_SPEED;

    PistonBlockActor::~PistonBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onRemoved(BlockSource &);
    virtual void getOwningPiston(BlockSource &);
    virtual void getDeletionDelayTimeSeconds()const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    PistonBlockActor(BlockPos const&, bool);
    void _moveCollidedEntities(BlockSource &);
    void _tryFixupStickyPistonArm(BlockSource &);
    void getFacingDir(BlockSource &);
    void _handleRedstoneSignal(BlockSource &);
    void getProgress(float);
    void _checkAttachedBlocks(BlockSource &);
    void _spawnMovingBlocks(BlockSource &);
    void getCorrectArmBlock()const;
    void _getReplacementBlock(BlockSource const&, BlockPos)const;
    bool isSticky()const;
    void _spawnBlocks(BlockSource &);
    void _tryExpand();
    void _tryRetract();
    bool isMoving()const;
    bool isExpanded()const;
    bool isExpanding()const;
    bool isRetracted()const;
    bool isRetracting()const;
    void _moveCollidedEntitiesHelper(BlockSource &, AABB const&, BlockPos const&, Actor *, unsigned int);
    void moveEntityLastProgress(Actor &, Vec3);
    void _attachedBlockWalker(BlockSource &, BlockPos const&, unsigned char, unsigned char);
    void _hasBlockAttached(BlockPos const&);
    void _handleSlimeConnections(BlockSource &, BlockPos const&, unsigned char, unsigned char);
    void _canStickToEachOther(Block const&, Block const&);
    void _sortAttachedBlocks(BlockSource &);
    void _clearBlockInfront(BlockSource &, BlockPos const&, BlockPos const&);
    void _checkInceptionAchievement(BlockActor &, BlockSource &, BlockPos const&);
    void getLastProgress();
    void setShouldVerifyArmType(bool);
    void getMaxInteractionCount()const;
};
