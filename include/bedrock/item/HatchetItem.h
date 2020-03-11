#pragma once

#include "./DiggerItem.h"
#include <string>
#include "../../unmapped/Tier.h"
#include "./ItemInstance.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include "../../unmapped/Block.h"


class HatchetItem : DiggerItem {

public:
    virtual ~HatchetItem();
    virtual void getEnchantSlot()const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    HatchetItem(std::string const&, int, Item::Tier const&);
};
