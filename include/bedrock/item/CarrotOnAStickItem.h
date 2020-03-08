#pragma once

#include "../actor/Actor"
#include "../../unmapped/Block"


class CarrotOnAStickItem : Item {

public:
    virtual CarrotOnAStickItem::~CarrotOnAStickItem()
    virtual bool isHandEquipped()const;
    virtual bool requiresInteract()const;
    virtual void getEnchantSlot()const;
    virtual void getEnchantValue()const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;

    CarrotOnAStickItem(std::string const&, int);
};
