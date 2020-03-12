#pragma once

#include <string>
#include "BlockLegacy.h"


class FrostedIceBlock : BlockLegacy {

public:
    static long MIN_NEIGHBORS;
    static long MAX_AGE;

    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    ~FrostedIceBlock();
    virtual bool canBeSilkTouched()const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    void _slightlyMelt(BlockSource &, BlockPos const&, Random &, bool)const;
    FrostedIceBlock(std::string const&, int, bool);
    void getTickDelay(Random &)const;
    void _countNeighbors(BlockSource &, BlockPos const&)const;
};
