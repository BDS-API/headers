#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class FrostedIceBlock : BlockLegacy {

public:
    static long MIN_NEIGHBORS;
    static long MAX_AGE;

    virtual ~FrostedIceBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool canBeSilkTouched()const;

    FrostedIceBlock(std::string const&, int, bool);
    void _countNeighbors(BlockSource &, BlockPos const&)const;
    void _slightlyMelt(BlockSource &, BlockPos const&, Random &, bool)const;
    void getTickDelay(Random &)const;
};
