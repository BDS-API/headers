#pragma once



using namespace BlockTickingQueue;

class TickDataSet {

public:

    TickDataSet(void);
    void remove(BlockPos const&, Block const&);
    void remove(std::function<bool ()(TickNextTickData const&)> &&);
};
