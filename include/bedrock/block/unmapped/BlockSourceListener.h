#pragma once

#include <memory>


class BlockSourceListener {

public:
    ~BlockSourceListener(); // _ZN19BlockSourceListenerD2Ev
    virtual void onSourceCreated(BlockSource &); // _ZN19BlockSourceListener15onSourceCreatedER11BlockSource
    virtual void onSourceDestroyed(BlockSource &); // _ZN19BlockSourceListener17onSourceDestroyedER11BlockSource
    virtual void onAreaChanged(BlockSource &, BlockPos const&, BlockPos const&); // _ZN19BlockSourceListener13onAreaChangedER11BlockSourceRK8BlockPosS4_
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*); // _ZN19BlockSourceListener14onBlockChangedER11BlockSourceRK8BlockPosjRK5BlockS7_iPK21ActorBlockSyncMessage
    virtual void onBrightnessChanged(BlockSource &, BlockPos const&); // _ZN19BlockSourceListener19onBrightnessChangedER11BlockSourceRK8BlockPos
    virtual void onBlockEntityChanged(BlockSource &, BlockActor &); // _ZN19BlockSourceListener20onBlockEntityChangedER11BlockSourceR10BlockActor
    virtual void onBlockEntityAboutToBeRemoved(BlockSource &, std::shared_ptr<BlockActor>); // _ZN19BlockSourceListener29onBlockEntityAboutToBeRemovedER11BlockSourceSt10shared_ptrI10BlockActorE
    virtual void onEntityChanged(BlockSource &, Actor &); // _ZN19BlockSourceListener15onEntityChangedER11BlockSourceR5Actor
    virtual void onBlockEvent(BlockSource &, int, int, int, int, int); // _ZN19BlockSourceListener12onBlockEventER11BlockSourceiiiii
    BlockSourceListener(); // _ZN19BlockSourceListenerC2Ev
};
