#pragma once

#include "../../unmapped/Block.h"
#include "./ItemInstance.h"
#include "../util/BlockPos.h"
#include "./Item.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include <string>


class BlockPlanterItem : Item {

public:
    virtual ~BlockPlanterItem();
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    BlockPlanterItem(std::string const&, int, Block const&, bool);
    bool canUseOn(ItemInstance const&, Actor &, BlockPos, unsigned char)const;
};
