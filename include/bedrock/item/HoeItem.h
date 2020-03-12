#pragma once

#include "ItemStack.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../actor/Mob.h"
#include "Item.h"


class HoeItem : Item {

public:
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    ~HoeItem();
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual bool isHandEquipped()const;
    virtual void getEnchantSlot()const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    HoeItem(std::string const&, int, Item::Tier);
};
