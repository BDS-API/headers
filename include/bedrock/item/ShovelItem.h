#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "unmapped/Tier"


class ShovelItem : DiggerItem {

public:
    virtual ShovelItem::~ShovelItem()
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getEnchantSlot()const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    ShovelItem(std::string const&, int, Item::Tier const&);
};
