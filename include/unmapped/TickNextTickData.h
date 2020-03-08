#pragma once

#include "../bedrock/util/Tick"
#include "../bedrock/util/BlockPos"


class TickNextTickData {

public:

    TickNextTickData(TickNextTickData const&);
    TickNextTickData(TickNextTickData&&);
    TickNextTickData(BlockPos const&, Block const&, Tick const&, int);
};
