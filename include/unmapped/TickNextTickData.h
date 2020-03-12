#pragma once

#include "Block.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Tick.h"


class TickNextTickData {

public:
    void operator>(TickNextTickData const&)const;
    TickNextTickData(TickNextTickData &&);
    TickNextTickData(TickNextTickData const&);
    TickNextTickData(BlockPos const&, Block const&, Tick const&, int);
    void operator<(TickNextTickData const&)const;
    void operator==(TickNextTickData const&)const;
};
