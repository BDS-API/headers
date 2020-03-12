#pragma once

#include <string>
#include "Item.h"
#include "../util/BlockPos.h"


class HoeItem : Item {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual bool isHandEquipped()const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void getEnchantSlot()const;
    ~HoeItem();
    HoeItem(std::string const&, int, Item::Tier);
};
