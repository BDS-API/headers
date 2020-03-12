#pragma once

#include <memory>
#include "BlockActor.h"


class MovingBlockActor : BlockActor {

public:
    virtual void tick(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    ~MovingBlockActor();
    virtual void getDeletionDelayTimeSeconds()const;
    virtual void getUpdatePacket(BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void getOwningPiston(BlockSource &);
    virtual void save(CompoundTag &)const;
    void setBlock(Block const&);
    void registerPiston(BlockSource &, BlockPos const&);
    void getDrawPos(BlockSource &, float);
    void getExtraBlock();
    void setBlockEntity(std::shared_ptr<BlockActor>);
    void _validPistonPos(BlockSource &)const;
    void getBlock();
    void aquireBlockEntity();
    void moveCollidedEntities(PistonBlockActor &, BlockSource &);
    MovingBlockActor(BlockPos const&);
    void setExtraBlock(Block const&);
    void getBlockEntity();
};
