#pragma once

#include "unmapped/Tier"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../../unmapped/Block"


class HatchetItem : DiggerItem {

public:
    HatchetItem::~HatchetItem()
    virtual void getEnchantSlot()const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    HatchetItem(std::string const&, int, Item::Tier const&);
};
