#pragma once

#include "BlockActor.h"
#include "../../../unmapped/Block.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "PistonBlockActor.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include <memory>
#include "../../util/BlockPos.h"


class MovingBlockActor : BlockActor {

public:
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getDeletionDelayTimeSeconds()const;
    virtual void save(CompoundTag &)const;
    virtual void getUpdatePacket(BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void getOwningPiston(BlockSource &);
    virtual void tick(BlockSource &);
    ~MovingBlockActor();
    void setBlockEntity(std::shared_ptr<BlockActor>);
    void getBlockEntity();
    void _validPistonPos(BlockSource &)const;
    void getExtraBlock();
    void moveCollidedEntities(PistonBlockActor &, BlockSource &);
    void registerPiston(BlockSource &, BlockPos const&);
    void aquireBlockEntity();
    void getBlock();
    MovingBlockActor(BlockPos const&);
    void setBlock(Block const&);
    void getDrawPos(BlockSource &, float);
    void setExtraBlock(Block const&);
};
