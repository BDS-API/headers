#pragma once

#include "ItemStack.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "ItemInstance.h"
#include "../../unmapped/Block.h"
#include "Item.h"


class BlockPlanterItem : Item {

public:
    ~BlockPlanterItem();
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    BlockPlanterItem(std::string const&, int, Block const&, bool);
    bool canUseOn(ItemInstance const&, Actor &, BlockPos, unsigned char)const;
};
