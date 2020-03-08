#pragma once

#include "../bedrock/util/BlockPos"


using namespace BlockTickingQueue;

class TickDataSet {

public:

    TickDataSet(void);
    void remove(BlockPos const&, Block const&);
    void remove(std::function<bool ()(TickNextTickData const&)> &&);
};
