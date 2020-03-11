#pragma once

#include "./Block.h"
#include "./TickNextTickData.h"
#include <functional>
#include "../bedrock/util/BlockPos.h"


namespace BlockTickingQueue {

class TickDataSet {

public:

    TickDataSet();
    ~TickDataSet();
    void remove(BlockPos const&, Block const&);
    void remove(std::function<bool (TickNextTickData const&)> &&);
};

}