#pragma once

#include <string>
#include "ItemStack.h"
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "Item.h"


class CarrotOnAStickItem : Item {

public:
    virtual bool isHandEquipped()const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    ~CarrotOnAStickItem();
    virtual void getEnchantSlot()const;
    virtual bool requiresInteract()const;
    virtual void getEnchantValue()const;
    CarrotOnAStickItem(std::string const&, int);
};
