#pragma once

#include "ItemStack.h"
#include "../util/BlockPos.h"
#include <string>
#include "DiggerItem.h"
#include "../actor/Actor.h"
#include "ItemInstance.h"
#include "../../unmapped/Block.h"
#include "Item.h"


class HatchetItem : DiggerItem {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void getEnchantSlot()const;
    ~HatchetItem();
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    HatchetItem(std::string const&, int, Item::Tier const&);
};
