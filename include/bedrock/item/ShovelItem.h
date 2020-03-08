#pragma once

#include "../../unmapped/Block"


class ShovelItem : DiggerItem {

public:
    virtual ShovelItem::~ShovelItem();
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getEnchantSlot(void)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    ShovelItem(std::string const&, int, Item::Tier const&);
};
