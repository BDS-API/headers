#pragma once

class TickNextTickData {

public:

    TickNextTickData(TickNextTickData const&);
    TickNextTickData(TickNextTickData&&);
    TickNextTickData(BlockPos const&, Block const&, Tick const&, int);
};
