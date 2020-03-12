#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Material.h"
#include "LiquidBlock.h"
#include "../util/Random.h"


class LiquidBlockStatic : LiquidBlock {

public:
    ~LiquidBlockStatic();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    void _setDynamic(BlockSource &, BlockPos const&)const;
    void _isFlammable(BlockSource &, BlockPos const&);
    LiquidBlockStatic(std::string const&, int, Material const&);
};
