#pragma once

#include <string>
#include "Item.h"


class WeaponItem : Item {

public:
    virtual void getAttackDamage()const;
    virtual bool isHandEquipped()const;
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getEnchantSlot()const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    ~WeaponItem();
    virtual void getEnchantValue()const;
    virtual void use(ItemStack &, Player &)const;
    virtual bool canDestroyInCreative()const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    WeaponItem(std::string const&, int, Item::Tier const&);
};
