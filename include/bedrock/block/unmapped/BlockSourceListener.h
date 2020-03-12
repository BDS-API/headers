#pragma once

#include <memory>


class BlockSourceListener {

public:
    virtual void onSourceCreated(BlockSource &);
    virtual void onBlockEntityChanged(BlockSource &, BlockActor &);
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    ~BlockSourceListener();
    virtual void onSourceDestroyed(BlockSource &);
    virtual void onBrightnessChanged(BlockSource &, BlockPos const&);
    virtual void onAreaChanged(BlockSource &, BlockPos const&, BlockPos const&);
    virtual void onBlockEntityAboutToBeRemoved(BlockSource &, std::shared_ptr<BlockActor>);
    virtual void onBlockEvent(BlockSource &, int, int, int, int, int);
    virtual void onEntityChanged(BlockSource &, Actor &);
    BlockSourceListener();
};
