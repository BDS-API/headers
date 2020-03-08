#pragma once

#include "../../unmapped/Block"
#include "unmapped/Tier"


class PickaxeItem : DiggerItem {

public:
    virtual PickaxeItem::~PickaxeItem()
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getEnchantSlot()const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;

    PickaxeItem(std::string const&, int, Item::Tier const&);
};
