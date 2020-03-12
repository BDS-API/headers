#pragma once

#include <string>
#include "Item.h"


class EnchantedBookItem : Item {

public:
    virtual void getEnchantSlot()const;
    virtual bool isGlint(ItemStackBase const&)const;
    virtual void getEnchantValue()const;
    ~EnchantedBookItem();
    EnchantedBookItem(std::string const&, int, bool);
};
