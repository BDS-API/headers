#pragma once

#include "Item.h"
#include <string>
#include "ItemStackBase.h"


class EnchantedBookItem : Item {

public:
    virtual void getEnchantValue()const;
    ~EnchantedBookItem();
    virtual void getEnchantSlot()const;
    virtual bool isGlint(ItemStackBase const&)const;
    EnchantedBookItem(std::string const&, int, bool);
};
