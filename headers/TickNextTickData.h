#pragma once

class TickNextTickData {

public:

    void TickNextTickData(TickNextTickData const&);
    void TickNextTickData(TickNextTickData&&);
    void TickNextTickData(BlockPos const&, Block const&, Tick const&, int);
};
