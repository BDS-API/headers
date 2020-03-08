#pragma once

#include "unmapped/Tier"
#include "../../unmapped/Block"


class PickaxeItem : DiggerItem {

public:
    PickaxeItem::~PickaxeItem()
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getEnchantSlot()const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;

    PickaxeItem(std::string const&, int, Item::Tier const&);
};
