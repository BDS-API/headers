#pragma once

#include "ItemStack.h"
#include "../util/BlockPos.h"
#include <string>
#include "DiggerItem.h"
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "Item.h"


class ShovelItem : DiggerItem {

public:
    ~ShovelItem();
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getEnchantSlot()const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ShovelItem(std::string const&, int, Item::Tier const&);
};
