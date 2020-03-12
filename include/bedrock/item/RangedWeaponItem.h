#pragma once

#include <string>
#include "Item.h"


class RangedWeaponItem : Item {

public:
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    ~RangedWeaponItem();
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void getEnchantValue()const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    RangedWeaponItem(std::string const&, int);
    void getLaunchPower(int, int, int)const;
};
