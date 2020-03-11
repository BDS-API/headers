#pragma once

#include "../../../unmapped/Block.h"
#include "../../nbt/CompoundTag.h"
#include "./BlockActor.h"
#include <memory>
#include "../../level/Level.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../util/BlockPos.h"
#include "./PistonBlockActor.h"
#include "../unmapped/BlockSource.h"


class MovingBlockActor : BlockActor {

public:
    virtual ~MovingBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void getOwningPiston(BlockSource &);
    virtual void getDeletionDelayTimeSeconds()const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    MovingBlockActor(BlockPos const&);
    void getDrawPos(BlockSource &, float);
    void _validPistonPos(BlockSource &)const;
    void setBlock(Block const&);
    void getBlock();
    void setExtraBlock(Block const&);
    void getExtraBlock();
    void setBlockEntity(std::shared_ptr<BlockActor>);
    void aquireBlockEntity();
    void getBlockEntity();
    void registerPiston(BlockSource &, BlockPos const&);
    void moveCollidedEntities(PistonBlockActor &, BlockSource &);
};
