#pragma once

class MovingBlockActor : BlockActor {

public:
    virtual MovingBlockActor::~MovingBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getOwningPiston(BlockSource &);
    virtual void getDeletionDelayTimeSeconds(void)const;

    MovingBlockActor(BlockPos const&);
    void getDrawPos(BlockSource &, float);
    void _validPistonPos(BlockSource &)const;
    void setBlock(Block const&);
    void getBlock(void);
    void setExtraBlock(Block const&);
    void getExtraBlock(void);
    void setBlockEntity(std::shared_ptr<BlockActor>);
    void aquireBlockEntity(void);
    void getBlockEntity(void);
    void registerPiston(BlockSource &, BlockPos const&);
    void moveCollidedEntities(PistonBlockActor &, BlockSource &);
};
