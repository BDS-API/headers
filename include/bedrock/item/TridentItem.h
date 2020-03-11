#pragma once

#include "../actor/Mob.h"
#include "../block/unmapped/BlockSource.h"
#include "./ItemStackBase.h"
#include "../container/Container.h"
#include "./Item.h"
#include "../level/Level.h"
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../actor/Player.h"
#include "./ItemStack.h"
#include <string>


class TridentItem : Item {

public:
    static long THROW_THRESHOLD_TIME;
    static long CHARGE_THRESHOLD_TIME;

    virtual ~TridentItem();
    virtual void getMaxDamage()const;
    virtual void getAttackDamage()const;
    virtual bool canDestroyInCreative()const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void getEnchantSlot()const;
    virtual void getEnchantValue()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;

    TridentItem(std::string const&, int);
    void _setupProjectile(Actor *, ItemStack, bool)const;
};
