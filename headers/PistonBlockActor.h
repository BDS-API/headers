#pragma once

class PistonBlockActor : BlockActor {

public:
    static long PistonBlockActor::ARM_ANIMATION_SPEED;

    virtual ~PistonBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void onRemoved(BlockSource &);
    virtual void getOwningPiston(BlockSource &);
    virtual void getDeletionDelayTimeSeconds(void)const;

    void PistonBlockActor(BlockPos const&, bool);
    void _moveCollidedEntities(BlockSource &);
    void _tryFixupStickyPistonArm(BlockSource &);
    void getFacingDir(BlockSource &);
    void _handleRedstoneSignal(BlockSource &);
    void getProgress(float);
    void _checkAttachedBlocks(BlockSource &);
    void _spawnMovingBlocks(BlockSource &);
    void getCorrectArmBlock(void)const;
    bool isSticky(void)const;
    void _spawnBlocks(BlockSource &);
    void _tryExpand(void);
    void _tryRetract(void);
    bool isMoving(void)const;
    bool isExpanded(void)const;
    bool isExpanding(void)const;
    bool isRetracted(void)const;
    bool isRetracting(void)const;
    void _moveCollidedEntitiesHelper(BlockSource &, AABB const&, BlockPos const&, Actor *, unsigned int);
    void moveEntityLastProgress(Actor &, Vec3);
    void _attachedBlockWalker(BlockSource &, BlockPos const&, unsigned char, unsigned char);
    void _hasBlockAttached(BlockPos const&);
    void _handleSlimeConnections(BlockSource &, BlockPos const&, unsigned char, unsigned char);
    void _sortAttachedBlocks(BlockSource &);
    void _clearBlockInfront(BlockSource &, BlockPos const&, BlockPos const&);
    void _checkInceptionAchievement(BlockActor &, BlockSource &, BlockPos const&);
    void getLastProgress(void);
    void setShouldVerifyArmType(bool);
    void getMaxInteractionCount(void)const;
};
