#pragma once

#include "../actor/Actor"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "unmapped/Tier"


class HatchetItem : DiggerItem {

public:
    virtual HatchetItem::~HatchetItem()
    virtual void getEnchantSlot()const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    HatchetItem(std::string const&, int, Item::Tier const&);
};
