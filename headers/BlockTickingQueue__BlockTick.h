#pragma once

class BlockTickingQueue::BlockTick {

public:

    void BlockTick(BlockPos const&, Block const&, Tick const&, int);
    void BlockTick(BlockTickingQueue::BlockTick const&);
    void BlockTick(BlockTickingQueue::BlockTick&&);
};
