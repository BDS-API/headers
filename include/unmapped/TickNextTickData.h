#pragma once



class TickNextTickData {

public:
    TickNextTickData(TickNextTickData const&); // _ZN16TickNextTickDataC2ERKS_
    TickNextTickData(TickNextTickData &&); // _ZN16TickNextTickDataC2EOS_
    TickNextTickData(BlockPos const&, Block const&, Tick const&, int); // _ZN16TickNextTickDataC2ERK8BlockPosRK5BlockRK4Ticki
    void operator==(TickNextTickData const&)const; // _ZNK16TickNextTickDataeqERKS_
    void operator<(TickNextTickData const&)const; // _ZNK16TickNextTickDataltERKS_
    void operator>(TickNextTickData const&)const; // _ZNK16TickNextTickDatagtERKS_
};
