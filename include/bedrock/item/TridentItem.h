#pragma once

#include <string>
#include "Item.h"
#include "ItemStack.h"


class TridentItem : Item {

public:
    static long THROW_THRESHOLD_TIME;
    static long CHARGE_THRESHOLD_TIME;

    virtual bool canDestroyInCreative()const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getMaxDamage()const;
    virtual void getEnchantValue()const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void getEnchantSlot()const;
    virtual void use(ItemStack &, Player &)const;
    ~TridentItem();
    virtual void getAttackDamage()const;
    void _setupProjectile(Actor *, ItemStack, bool)const;
    TridentItem(std::string const&, int);
};
