#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"
#include "../../unmapped/Block"


class BlockPlanterItem : Item {

public:
    virtual BlockPlanterItem::~BlockPlanterItem()
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    BlockPlanterItem(std::string const&, int, Block const&, bool);
    bool canUseOn(ItemInstance const&, Actor &, BlockPos, unsigned char)const;
};
