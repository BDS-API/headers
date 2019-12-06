#pragma once

class BlockTickingQueue::TickDataSet {

public:

    void TickDataSet(void);
    void remove(BlockPos const&, Block const&);
    void remove(std::function<bool ()(TickNextTickData const&)> &&);
};
