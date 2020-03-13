#pragma once

#include <memory>
#include "BlockActor.h"


class MovingBlockActor : BlockActor {

public:
    ~MovingBlockActor(); // _ZN16MovingBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN16MovingBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK16MovingBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN16MovingBlockActor4tickER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN16MovingBlockActor15getUpdatePacketER11BlockSource
    virtual void getOwningPiston(BlockSource &); // _ZN16MovingBlockActor15getOwningPistonER11BlockSource
    virtual void getDeletionDelayTimeSeconds()const; // _ZNK16MovingBlockActor27getDeletionDelayTimeSecondsEv
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN16MovingBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    MovingBlockActor(BlockPos const&); // _ZN16MovingBlockActorC2ERK8BlockPos
    void getDrawPos(BlockSource &, float); // _ZN16MovingBlockActor10getDrawPosER11BlockSourcef
    void _validPistonPos(BlockSource &)const; // _ZNK16MovingBlockActor15_validPistonPosER11BlockSource
    void setBlock(Block const&); // _ZN16MovingBlockActor8setBlockERK5Block
    void getBlock(); // _ZN16MovingBlockActor8getBlockEv
    void setExtraBlock(Block const&); // _ZN16MovingBlockActor13setExtraBlockERK5Block
    void getExtraBlock(); // _ZN16MovingBlockActor13getExtraBlockEv
    void setBlockEntity(std::shared_ptr<BlockActor>); // _ZN16MovingBlockActor14setBlockEntityESt10shared_ptrI10BlockActorE
    void aquireBlockEntity(); // _ZN16MovingBlockActor17aquireBlockEntityEv
    void getBlockEntity(); // _ZN16MovingBlockActor14getBlockEntityEv
    void registerPiston(BlockSource &, BlockPos const&); // _ZN16MovingBlockActor14registerPistonER11BlockSourceRK8BlockPos
    void moveCollidedEntities(PistonBlockActor &, BlockSource &); // _ZN16MovingBlockActor20moveCollidedEntitiesER16PistonBlockActorR11BlockSource
};
