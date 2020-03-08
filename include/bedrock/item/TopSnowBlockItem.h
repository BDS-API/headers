#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"


class TopSnowBlockItem : BlockItem {

public:
    virtual TopSnowBlockItem::~TopSnowBlockItem()
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    TopSnowBlockItem(std::string const&, int);
};
