#pragma once

#include "ItemStack.h"
#include <string>
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "BlockItem.h"


class WaterLilyBlockItem : BlockItem {

public:
    ~WaterLilyBlockItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual bool isLiquidClipItem(int)const;
    WaterLilyBlockItem(std::string const&, int);
};
