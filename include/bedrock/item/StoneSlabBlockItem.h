#pragma once

#include <string>
#include "SlabBlockItem.h"


class StoneSlabBlockItem : SlabBlockItem {

public:
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void getLevelDataForAuxValue(int)const;
    ~StoneSlabBlockItem();
    StoneSlabBlockItem(std::string const&, int);
};
