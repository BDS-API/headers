#pragma once

#include "ItemStack.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../actor/Mob.h"
#include "Item.h"


class RangedWeaponItem : Item {

public:
    ~RangedWeaponItem();
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void getEnchantValue()const;
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    void getLaunchPower(int, int, int)const;
    RangedWeaponItem(std::string const&, int);
};
