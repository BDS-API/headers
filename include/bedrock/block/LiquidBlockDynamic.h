#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Material.h"
#include "LiquidBlock.h"
#include "../util/Random.h"


class LiquidBlockDynamic : LiquidBlock {

public:
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    ~LiquidBlockDynamic();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    void _tick(BlockSource &, BlockPos const&, Random &, bool)const;
    void _canSpreadTo(BlockSource &, BlockPos const&, BlockPos const&, unsigned char)const;
    void _getHighest(BlockSource &, BlockPos const&, int, int &)const;
    void _getSlopeDistance(BlockSource &, BlockPos const&, int, int)const;
    void _setStatic(BlockSource &, BlockPos const&, bool)const;
    void _spread(BlockSource &, BlockPos const&, int, bool)const;
    void _trySpreadTo(BlockSource &, BlockPos const&, int, BlockPos const&, unsigned char)const;
    void _isWaterBlocking(BlockSource &, BlockPos const&, BlockPos const&, unsigned char)const;
    LiquidBlockDynamic(std::string const&, int, Material const&);
    void _getSpread(BlockSource &, BlockPos const&)const;
    void shouldBecomeStatic(BlockSource &, BlockPos const&, Random &)const;
};
