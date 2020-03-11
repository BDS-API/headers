#pragma once

#include "../actor/BlockActor.h"
#include "../../../unmapped/Block.h"
#include "./BlockSource.h"
#include "../../actor/Actor.h"
#include "../../actor/unmapped/ActorBlockSyncMessage.h"
#include <memory>
#include "../../util/BlockPos.h"


class BlockSourceListener {

public:
    virtual ~BlockSourceListener();
    virtual void onSourceCreated(BlockSource &);
    virtual void onSourceDestroyed(BlockSource &);
    virtual void onAreaChanged(BlockSource &, BlockPos const&, BlockPos const&);
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    virtual void onBrightnessChanged(BlockSource &, BlockPos const&);
    virtual void onBlockEntityChanged(BlockSource &, BlockActor &);
    virtual void onBlockEntityAboutToBeRemoved(BlockSource &, std::shared_ptr<BlockActor>);
    virtual void onEntityChanged(BlockSource &, Actor &);
    virtual void onBlockEvent(BlockSource &, int, int, int, int, int);

    BlockSourceListener();
};
