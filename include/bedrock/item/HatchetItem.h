#pragma once

#include <string>
#include "DiggerItem.h"
#include "../util/BlockPos.h"


class HatchetItem : DiggerItem {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ~HatchetItem();
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void getEnchantSlot()const;
    HatchetItem(std::string const&, int, Item::Tier const&);
};
