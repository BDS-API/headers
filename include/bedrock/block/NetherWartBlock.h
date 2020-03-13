#pragma once

#include <string>
#include "BushBlock.h"


class NetherWartBlock : BushBlock {

public:
    static long MAX_AGE;

    ~NetherWartBlock(); // _ZN15NetherWartBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK15NetherWartBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK15NetherWartBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool canContainLiquid()const; // _ZNK15NetherWartBlock16canContainLiquidEv
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const; // _ZNK15NetherWartBlock10mayPlaceOnER11BlockSourceRK8BlockPos
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK15NetherWartBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK15NetherWartBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK15NetherWartBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK15NetherWartBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual bool canBeSilkTouched()const; // _ZNK15NetherWartBlock16canBeSilkTouchedEv
    NetherWartBlock(std::string const&, int); // _ZN15NetherWartBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void growCropsToMax(BlockSource &, BlockPos const&); // _ZN15NetherWartBlock14growCropsToMaxER11BlockSourceRK8BlockPos
};
