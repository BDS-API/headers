#pragma once

#include "../../util/Tick"
#include "../../../unmapped/Block"
#include "../../util/BlockPos"


using namespace BlockTickingQueue;

class BlockTick {

public:

    BlockTick(BlockPos const&, Block const&, Tick const&, int);
    BlockTick(BlockTickingQueue::BlockTick const&);
    BlockTick(BlockTickingQueue::BlockTick&&);
};
