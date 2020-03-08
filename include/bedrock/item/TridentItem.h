#pragma once

#include "../block/unmapped/BlockSource"
#include "../actor/Mob"
#include "../actor/Actor"
#include "../level/Level"
#include "../actor/Player"
#include "../util/Vec3"
#include "../container/Container"


class TridentItem : Item {

public:
    static long THROW_THRESHOLD_TIME;
    static long CHARGE_THRESHOLD_TIME;

    virtual TridentItem::~TridentItem()
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
