#pragma once

#include "../../util/Vec3.h"
#include "BlockActor.h"
#include "../../util/BlockPos.h"


class PistonBlockActor : BlockActor {

public:
    static long ARM_ANIMATION_SPEED;

    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void getDeletionDelayTimeSeconds()const;
    virtual void save(CompoundTag &)const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void tick(BlockSource &);
    ~PistonBlockActor();
    virtual void getUpdatePacket(BlockSource &);
    virtual void onRemoved(BlockSource &);
    virtual void getOwningPiston(BlockSource &);
    bool isSticky()const;
    void _handleRedstoneSignal(BlockSource &);
    void _checkInceptionAchievement(BlockActor &, BlockSource &, BlockPos const&);
    void getProgress(float);
    void _sortAttachedBlocks(BlockSource &);
    void _moveCollidedEntities(BlockSource &);
    void setShouldVerifyArmType(bool);
    void _spawnBlocks(BlockSource &);
    void _attachedBlockWalker(BlockSource &, BlockPos const&, unsigned char, unsigned char);
    void _getReplacementBlock(BlockSource const&, BlockPos)const;
    void _tryRetract();
    void _tryFixupStickyPistonArm(BlockSource &);
    void _moveCollidedEntitiesHelper(BlockSource &, AABB const&, BlockPos const&, Actor *, unsigned int);
    void getMaxInteractionCount()const;
    void getCorrectArmBlock()const;
    void _checkAttachedBlocks(BlockSource &);
    bool isExpanding()const;
    void _spawnMovingBlocks(BlockSource &);
    void _canStickToEachOther(Block const&, Block const&);
    bool isExpanded()const;
    void getFacingDir(BlockSource &);
    bool isRetracted()const;
    void moveEntityLastProgress(Actor &, Vec3);
    bool isRetracting()const;
    void _tryExpand();
    void getLastProgress();
    void _hasBlockAttached(BlockPos const&);
    bool isMoving()const;
    void _clearBlockInfront(BlockSource &, BlockPos const&, BlockPos const&);
    PistonBlockActor(BlockPos const&, bool);
    void _handleSlimeConnections(BlockSource &, BlockPos const&, unsigned char, unsigned char);
};
