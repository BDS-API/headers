#pragma once

#include <string>
#include "DiggerItem.h"
#include "ItemInstance.h"
#include "../../unmapped/Block.h"
#include "Item.h"


class PickaxeItem : DiggerItem {

public:
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    ~PickaxeItem();
    virtual void getEnchantSlot()const;
    PickaxeItem(std::string const&, int, Item::Tier const&);
};
