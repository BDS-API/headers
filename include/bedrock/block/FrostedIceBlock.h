#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class FrostedIceBlock : BlockLegacy {

public:
    static long MIN_NEIGHBORS;
    static long MAX_AGE;

    ~FrostedIceBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    FrostedIceBlock(std::string const&, int, bool);
    void _slightlyMelt(BlockSource &, BlockPos const&, Random &, bool)const;
    void _countNeighbors(BlockSource &, BlockPos const&)const;
    void getTickDelay(Random &)const;
};
