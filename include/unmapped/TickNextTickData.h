#pragma once



class TickNextTickData {

public:
    TickNextTickData(TickNextTickData const&);
    TickNextTickData(BlockPos const&, Block const&, Tick const&, int);
    void operator<(TickNextTickData const&)const;
    void operator>(TickNextTickData const&)const;
    TickNextTickData(TickNextTickData &&);
    void operator==(TickNextTickData const&)const;
};
