#pragma once

using namespace BlockTickingQueue;

class BlockTick {

public:

    BlockTick(BlockPos const&, Block const&, Tick const&, int);
    BlockTick(BlockTickingQueue::BlockTick const&);
    BlockTick(BlockTickingQueue::BlockTick&&);
};
