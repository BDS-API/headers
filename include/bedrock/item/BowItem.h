#pragma once

#include "RangedWeaponItem.h"
#include <string>
#include "ItemStackBase.h"


class BowItem : RangedWeaponItem {

public:
    ~BowItem();
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getEnchantSlot()const;
    virtual void setIcon(std::string const&, int);
    BowItem(std::string const&, int);
};
