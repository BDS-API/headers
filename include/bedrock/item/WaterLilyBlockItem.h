#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"


class WaterLilyBlockItem : BlockItem {

public:
    virtual WaterLilyBlockItem::~WaterLilyBlockItem()
    virtual bool isLiquidClipItem(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    WaterLilyBlockItem(std::string const&, int);
};
