#pragma once

#include "ItemStack.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../actor/Player.h"
#include "../container/Container.h"
#include "../actor/Mob.h"
#include "Item.h"
#include "../level/Level.h"
#include "ItemStackBase.h"
#include "../block/unmapped/BlockSource.h"


class TridentItem : Item {

public:
    static long THROW_THRESHOLD_TIME;
    static long CHARGE_THRESHOLD_TIME;

    virtual void getEnchantValue()const;
    virtual void use(ItemStack &, Player &)const;
    ~TridentItem();
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getEnchantSlot()const;
    virtual bool canDestroyInCreative()const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void getAttackDamage()const;
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void getMaxDamage()const;
    TridentItem(std::string const&, int);
    void _setupProjectile(Actor *, ItemStack, bool)const;
};
