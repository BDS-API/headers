#pragma once

#include "../../unmapped/Block.h"
#include "./Item.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include <string>


class CarrotOnAStickItem : Item {

public:
    virtual ~CarrotOnAStickItem();
    virtual bool isHandEquipped()const;
    virtual bool requiresInteract()const;
    virtual void getEnchantSlot()const;
    virtual void getEnchantValue()const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;

    CarrotOnAStickItem(std::string const&, int);
};
