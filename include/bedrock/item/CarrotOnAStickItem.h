#pragma once

#include <string>
#include "Item.h"


class CarrotOnAStickItem : Item {

public:
    ~CarrotOnAStickItem();
    virtual bool isHandEquipped()const;
    virtual void getEnchantValue()const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual bool requiresInteract()const;
    virtual void getEnchantSlot()const;
    CarrotOnAStickItem(std::string const&, int);
};
