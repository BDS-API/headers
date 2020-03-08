#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"


class BellBlockItem : BlockItem {

public:
    virtual BellBlockItem::~BellBlockItem()
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    BellBlockItem(std::string const&, int);
};
