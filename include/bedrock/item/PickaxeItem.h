#pragma once

#include <string>
#include "DiggerItem.h"


class PickaxeItem : DiggerItem {

public:
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void getEnchantSlot()const;
    ~PickaxeItem();
    PickaxeItem(std::string const&, int, Item::Tier const&);
};
