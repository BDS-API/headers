#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Material"


class LiquidBlockStatic : LiquidBlock {

public:
    LiquidBlockStatic::~LiquidBlockStatic()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;

    LiquidBlockStatic(std::string const&, int, Material const&);
    void _setDynamic(BlockSource &, BlockPos const&)const;
    void _isFlammable(BlockSource &, BlockPos const&);
};
