#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "BlockItem.h"


class WaterLilyBlockItem : BlockItem {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual bool isLiquidClipItem(int)const;
    ~WaterLilyBlockItem();
    WaterLilyBlockItem(std::string const&, int);
};
