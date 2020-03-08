#pragma once

#include "../../actor/Actor"
#include "../../actor/unmapped/ActorBlockSyncMessage"
#include "../../../unmapped/Block"
#include "../../util/BlockPos"
#include "../actor/BlockActor"


class BlockSourceListener {

public:
    virtual BlockSourceListener::~BlockSourceListener()
    virtual void onSourceCreated(BlockSource &);
    virtual void onSourceDestroyed(BlockSource &);
    virtual void onAreaChanged(BlockSource &, BlockPos const&, BlockPos const&);
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    virtual void onBrightnessChanged(BlockSource &, BlockPos const&);
    virtual void onBlockEntityChanged(BlockSource &, BlockActor &);
    virtual void onBlockEntityAboutToBeRemoved(BlockSource &, std::shared_ptr<BlockActor>);
    virtual void onEntityChanged(BlockSource &, Actor &);
    virtual void onBlockEvent(BlockSource &, int, int, int, int, int);

    BlockSourceListener(void);
};
