#pragma once

#include "../../unmapped/Block"


class WeaponItem : Item {

public:
    virtual WeaponItem::~WeaponItem();
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getAttackDamage(void)const;
    virtual bool isHandEquipped(void)const;
    virtual bool canDestroyInCreative(void)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void getEnchantSlot(void)const;
    virtual void getEnchantValue(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;

    WeaponItem(std::string const&, int, Item::Tier const&);
};
