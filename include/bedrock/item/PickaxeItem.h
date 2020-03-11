#pragma once

#include "./DiggerItem.h"
#include "../../unmapped/Block.h"
#include "../../unmapped/Tier.h"
#include "./ItemInstance.h"
#include <string>


class PickaxeItem : DiggerItem {

public:
    virtual ~PickaxeItem();
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getEnchantSlot()const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;

    PickaxeItem(std::string const&, int, Item::Tier const&);
};
