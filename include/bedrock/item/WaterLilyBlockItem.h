#pragma once

#include "./BlockItem.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include <string>


class WaterLilyBlockItem : BlockItem {

public:
    virtual ~WaterLilyBlockItem();
    virtual bool isLiquidClipItem(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    WaterLilyBlockItem(std::string const&, int);
};
