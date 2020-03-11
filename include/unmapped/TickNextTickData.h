#pragma once

#include "./Block.h"
#include "../bedrock/util/Tick.h"
#include "./TickNextTickData.h"
#include "../bedrock/util/BlockPos.h"


class TickNextTickData {

public:

    TickNextTickData(TickNextTickData const&);
    TickNextTickData(TickNextTickData &&);
    TickNextTickData(BlockPos const&, Block const&, Tick const&, int);
    void operator==(TickNextTickData const&)const;
    void operator<(TickNextTickData const&)const;
    void operator>(TickNextTickData const&)const;
};
