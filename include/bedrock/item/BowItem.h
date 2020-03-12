#pragma once

#include <string>
#include "RangedWeaponItem.h"


class BowItem : RangedWeaponItem {

public:
    virtual void getEnchantSlot()const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    ~BowItem();
    virtual void setIcon(std::string const&, int);
    BowItem(std::string const&, int);
};
