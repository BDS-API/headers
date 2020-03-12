#pragma once

#include <string>
#include "LiquidBlock.h"


class LiquidBlockStatic : LiquidBlock {

public:
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    ~LiquidBlockStatic();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    void _setDynamic(BlockSource &, BlockPos const&)const;
    void _isFlammable(BlockSource &, BlockPos const&);
    LiquidBlockStatic(std::string const&, int, Material const&);
};
