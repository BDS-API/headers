#pragma once

#include <string>
#include "Item.h"
#include "../util/BlockPos.h"


class BlockPlanterItem : Item {

public:
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    ~BlockPlanterItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    BlockPlanterItem(std::string const&, int, Block const&, bool);
    bool canUseOn(ItemInstance const&, Actor &, BlockPos, unsigned char)const;
};
