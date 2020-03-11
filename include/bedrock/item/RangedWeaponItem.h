#pragma once

#include "../actor/Mob.h"
#include <string>
#include "./Item.h"
#include "../actor/Actor.h"
#include "../actor/Player.h"
#include "./ItemStack.h"
#include "../../unmapped/Block.h"


class RangedWeaponItem : Item {

public:
    virtual ~RangedWeaponItem();
    virtual void getEnchantValue()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;

    RangedWeaponItem(std::string const&, int);
    void getLaunchPower(int, int, int)const;
};
