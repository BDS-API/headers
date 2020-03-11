#pragma once

#include "unmapped/BlockSource.h"
#include "../../unmapped/Material.h"
#include "./LiquidBlock.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include <string>


class LiquidBlockStatic : LiquidBlock {

public:
    virtual ~LiquidBlockStatic();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;

    LiquidBlockStatic(std::string const&, int, Material const&);
    void _setDynamic(BlockSource &, BlockPos const&)const;
    void _isFlammable(BlockSource &, BlockPos const&);
};
