#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"


class WoodSlabBlockItem : SlabBlockItem {

public:
    virtual WoodSlabBlockItem::~WoodSlabBlockItem()
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;

    WoodSlabBlockItem(std::string const&, int);
};
