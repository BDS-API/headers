#pragma once

#include "BlockActor.h"
#include "../../util/Vec3.h"
#include "../../util/BlockPos.h"


class PistonBlockActor : BlockActor {

public:
    static long ARM_ANIMATION_SPEED;

    ~PistonBlockActor(); // _ZN16PistonBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN16PistonBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK16PistonBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN16PistonBlockActor4tickER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN16PistonBlockActor15getUpdatePacketER11BlockSource
    virtual void onRemoved(BlockSource &); // _ZN16PistonBlockActor9onRemovedER11BlockSource
    virtual void getOwningPiston(BlockSource &); // _ZN16PistonBlockActor15getOwningPistonER11BlockSource
    virtual void getDeletionDelayTimeSeconds()const; // _ZNK16PistonBlockActor27getDeletionDelayTimeSecondsEv
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN16PistonBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    PistonBlockActor(BlockPos const&, bool); // _ZN16PistonBlockActorC2ERK8BlockPosb
    void _moveCollidedEntities(BlockSource &); // _ZN16PistonBlockActor21_moveCollidedEntitiesER11BlockSource
    void _tryFixupStickyPistonArm(BlockSource &); // _ZN16PistonBlockActor24_tryFixupStickyPistonArmER11BlockSource
    void getFacingDir(BlockSource &); // _ZN16PistonBlockActor12getFacingDirER11BlockSource
    void _handleRedstoneSignal(BlockSource &); // _ZN16PistonBlockActor21_handleRedstoneSignalER11BlockSource
    void getProgress(float); // _ZN16PistonBlockActor11getProgressEf
    void _checkAttachedBlocks(BlockSource &); // _ZN16PistonBlockActor20_checkAttachedBlocksER11BlockSource
    void _spawnMovingBlocks(BlockSource &); // _ZN16PistonBlockActor18_spawnMovingBlocksER11BlockSource
    void getCorrectArmBlock()const; // _ZNK16PistonBlockActor18getCorrectArmBlockEv
    void _getReplacementBlock(BlockSource const&, BlockPos)const; // _ZNK16PistonBlockActor20_getReplacementBlockERK11BlockSource8BlockPos
    bool isSticky()const; // _ZNK16PistonBlockActor8isStickyEv
    void _spawnBlocks(BlockSource &); // _ZN16PistonBlockActor12_spawnBlocksER11BlockSource
    void _tryExpand(); // _ZN16PistonBlockActor10_tryExpandEv
    void _tryRetract(); // _ZN16PistonBlockActor11_tryRetractEv
    bool isMoving()const; // _ZNK16PistonBlockActor8isMovingEv
    bool isExpanded()const; // _ZNK16PistonBlockActor10isExpandedEv
    bool isExpanding()const; // _ZNK16PistonBlockActor11isExpandingEv
    bool isRetracted()const; // _ZNK16PistonBlockActor11isRetractedEv
    bool isRetracting()const; // _ZNK16PistonBlockActor12isRetractingEv
    void _moveCollidedEntitiesHelper(BlockSource &, AABB const&, BlockPos const&, Actor *, unsigned int); // _ZN16PistonBlockActor27_moveCollidedEntitiesHelperER11BlockSourceRK4AABBRK8BlockPosP5Actorj
    void moveEntityLastProgress(Actor &, Vec3); // _ZN16PistonBlockActor22moveEntityLastProgressER5Actor4Vec3
    void _attachedBlockWalker(BlockSource &, BlockPos const&, unsigned char, unsigned char); // _ZN16PistonBlockActor20_attachedBlockWalkerER11BlockSourceRK8BlockPoshh
    void _hasBlockAttached(BlockPos const&); // _ZN16PistonBlockActor17_hasBlockAttachedERK8BlockPos
    void _handleSlimeConnections(BlockSource &, BlockPos const&, unsigned char, unsigned char); // _ZN16PistonBlockActor23_handleSlimeConnectionsER11BlockSourceRK8BlockPoshh
    void _canStickToEachOther(Block const&, Block const&); // _ZN16PistonBlockActor20_canStickToEachOtherERK5BlockS2_
    void _sortAttachedBlocks(BlockSource &); // _ZN16PistonBlockActor19_sortAttachedBlocksER11BlockSource
    void _clearBlockInfront(BlockSource &, BlockPos const&, BlockPos const&); // _ZN16PistonBlockActor18_clearBlockInfrontER11BlockSourceRK8BlockPosS4_
    void _checkInceptionAchievement(BlockActor &, BlockSource &, BlockPos const&); // _ZN16PistonBlockActor26_checkInceptionAchievementER10BlockActorR11BlockSourceRK8BlockPos
    void getLastProgress(); // _ZN16PistonBlockActor15getLastProgressEv
    void setShouldVerifyArmType(bool); // _ZN16PistonBlockActor22setShouldVerifyArmTypeEb
    void getMaxInteractionCount()const; // _ZNK16PistonBlockActor22getMaxInteractionCountEv
};
