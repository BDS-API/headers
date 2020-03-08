#pragma once

#include "../../util/Tick"
#include "../../util/BlockPos"
#include "../../../unmapped/Block"


using namespace BlockTickingQueue;

class BlockTick {

public:

    BlockTick(BlockPos const&, Block const&, Tick const&, int);
    BlockTick(BlockTickingQueue::BlockTick const&);
    BlockTick(BlockTickingQueue::BlockTick&&);
};
