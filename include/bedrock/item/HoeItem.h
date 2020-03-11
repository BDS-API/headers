#pragma once

#include "../actor/Mob.h"
#include <string>
#include "../../unmapped/Tier.h"
#include "../util/BlockPos.h"
#include "./Item.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include "../../unmapped/Block.h"


class HoeItem : Item {

public:
    virtual ~HoeItem();
    virtual bool isHandEquipped()const;
    virtual void getEnchantSlot()const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    HoeItem(std::string const&, int, Item::Tier);
};
