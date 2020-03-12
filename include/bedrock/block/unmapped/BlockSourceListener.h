#pragma once

#include "../../../unmapped/Block.h"
#include "../../actor/Actor.h"
#include "../actor/BlockActor.h"
#include "BlockSource.h"
#include <memory>
#include "../../util/BlockPos.h"
#include "../../actor/unmapped/ActorBlockSyncMessage.h"


class BlockSourceListener {

public:
    virtual void onBlockEntityAboutToBeRemoved(BlockSource &, std::shared_ptr<BlockActor>);
    virtual void onEntityChanged(BlockSource &, Actor &);
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    virtual void onBlockEvent(BlockSource &, int, int, int, int, int);
    virtual void onSourceCreated(BlockSource &);
    virtual void onSourceDestroyed(BlockSource &);
    ~BlockSourceListener();
    virtual void onAreaChanged(BlockSource &, BlockPos const&, BlockPos const&);
    virtual void onBrightnessChanged(BlockSource &, BlockPos const&);
    virtual void onBlockEntityChanged(BlockSource &, BlockActor &);
    BlockSourceListener();
};
