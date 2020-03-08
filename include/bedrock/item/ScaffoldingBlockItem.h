#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"


class ScaffoldingBlockItem : BlockItem {

public:
    virtual ScaffoldingBlockItem::~ScaffoldingBlockItem()
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    ScaffoldingBlockItem(std::string const&, int);
};
