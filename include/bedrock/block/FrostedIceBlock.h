#pragma once

#include <string>
#include "BlockLegacy.h"


class FrostedIceBlock : BlockLegacy {

public:
    static long MIN_NEIGHBORS;
    static long MAX_AGE;

    ~FrostedIceBlock(); // _ZN15FrostedIceBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK15FrostedIceBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK15FrostedIceBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK15FrostedIceBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK15FrostedIceBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK15FrostedIceBlock16getResourceCountER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK15FrostedIceBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK15FrostedIceBlock13playerDestroyER6PlayerRK8BlockPosRK5Block
    virtual bool canBeSilkTouched()const; // _ZNK15FrostedIceBlock16canBeSilkTouchedEv
    FrostedIceBlock(std::string const&, int, bool); // _ZN15FrostedIceBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib
    void _countNeighbors(BlockSource &, BlockPos const&)const; // _ZNK15FrostedIceBlock15_countNeighborsER11BlockSourceRK8BlockPos
    void _slightlyMelt(BlockSource &, BlockPos const&, Random &, bool)const; // _ZNK15FrostedIceBlock13_slightlyMeltER11BlockSourceRK8BlockPosR6Randomb
    void getTickDelay(Random &)const; // _ZNK15FrostedIceBlock12getTickDelayER6Random
};
