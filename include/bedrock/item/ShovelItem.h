#pragma once

#include "./DiggerItem.h"
#include <string>
#include "../../unmapped/Tier.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include "../../unmapped/Block.h"


class ShovelItem : DiggerItem {

public:
    virtual ~ShovelItem();
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getEnchantSlot()const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    ShovelItem(std::string const&, int, Item::Tier const&);
};
