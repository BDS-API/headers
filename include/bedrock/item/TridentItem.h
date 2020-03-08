#pragma once

#include "../../unmapped/BlockSource"
#include "../actor/Actor"


class TridentItem : Item {

public:
    static long THROW_THRESHOLD_TIME;
    static long CHARGE_THRESHOLD_TIME;

    virtual TridentItem::~TridentItem();
    virtual void getMaxDamage(void)const;
    virtual void getAttackDamage(void)const;
    virtual bool canDestroyInCreative(void)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void getEnchantSlot(void)const;
    virtual void getEnchantValue(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;

    TridentItem(std::string const&, int);
    void _setupProjectile(Actor *, ItemStack, bool)const;
};
