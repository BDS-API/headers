#pragma once

#include "BlockActor.h"
#include "../../util/AABB.h"
#include "../../../unmapped/Block.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../util/Vec3.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"


class PistonBlockActor : BlockActor {

public:
    static long ARM_ANIMATION_SPEED;

    virtual void getOwningPiston(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    ~PistonBlockActor();
    virtual void onRemoved(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void getDeletionDelayTimeSeconds()const;
    void _tryFixupStickyPistonArm(BlockSource &);
    void getProgress(float);
    void _hasBlockAttached(BlockPos const&);
    void _moveCollidedEntities(BlockSource &);
    void _clearBlockInfront(BlockSource &, BlockPos const&, BlockPos const&);
    bool isMoving()const;
    void getMaxInteractionCount()const;
    void _handleSlimeConnections(BlockSource &, BlockPos const&, unsigned char, unsigned char);
    void _tryExpand();
    void _canStickToEachOther(Block const&, Block const&);
    void setShouldVerifyArmType(bool);
    bool isSticky()const;
    void _checkAttachedBlocks(BlockSource &);
    void _handleRedstoneSignal(BlockSource &);
    PistonBlockActor(BlockPos const&, bool);
    bool isExpanding()const;
    void getFacingDir(BlockSource &);
    void getLastProgress();
    void _checkInceptionAchievement(BlockActor &, BlockSource &, BlockPos const&);
    void _spawnMovingBlocks(BlockSource &);
    void _moveCollidedEntitiesHelper(BlockSource &, AABB const&, BlockPos const&, Actor *, unsigned int);
    void getCorrectArmBlock()const;
    void _spawnBlocks(BlockSource &);
    bool isRetracted()const;
    void _tryRetract();
    void _sortAttachedBlocks(BlockSource &);
    void moveEntityLastProgress(Actor &, Vec3);
    void _getReplacementBlock(BlockSource const&, BlockPos)const;
    bool isExpanded()const;
    void _attachedBlockWalker(BlockSource &, BlockPos const&, unsigned char, unsigned char);
    bool isRetracting()const;
};
