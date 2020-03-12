#pragma once

#include <string>
#include "SlabBlockItem.h"


class WoodSlabBlockItem : SlabBlockItem {

public:
    ~WoodSlabBlockItem();
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void getLevelDataForAuxValue(int)const;
    WoodSlabBlockItem(std::string const&, int);
};
