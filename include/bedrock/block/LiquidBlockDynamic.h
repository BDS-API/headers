#pragma once

#include <string>
#include "LiquidBlock.h"


class LiquidBlockDynamic : LiquidBlock {

public:
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    ~LiquidBlockDynamic();
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    void _spread(BlockSource &, BlockPos const&, int, bool)const;
    void _trySpreadTo(BlockSource &, BlockPos const&, int, BlockPos const&, unsigned char)const;
    void _getSpread(BlockSource &, BlockPos const&)const;
    void _getSlopeDistance(BlockSource &, BlockPos const&, int, int)const;
    void _setStatic(BlockSource &, BlockPos const&, bool)const;
    void shouldBecomeStatic(BlockSource &, BlockPos const&, Random &)const;
    void _isWaterBlocking(BlockSource &, BlockPos const&, BlockPos const&, unsigned char)const;
    void _canSpreadTo(BlockSource &, BlockPos const&, BlockPos const&, unsigned char)const;
    LiquidBlockDynamic(std::string const&, int, Material const&);
    void _tick(BlockSource &, BlockPos const&, Random &, bool)const;
    void _getHighest(BlockSource &, BlockPos const&, int, int &)const;
};
