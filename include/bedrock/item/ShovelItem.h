#pragma once

#include <string>
#include "DiggerItem.h"
#include "../util/BlockPos.h"


class ShovelItem : DiggerItem {

public:
    virtual bool canDestroySpecial(Block const&)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void getEnchantSlot()const;
    ~ShovelItem();
    ShovelItem(std::string const&, int, Item::Tier const&);
};
