#pragma once

#include "../actor/Mob"
#include "../level/Level"
#include "../../unmapped/Block"
#include "../actor/Player"
#include "unmapped/Tier"


class WeaponItem : Item {

public:
    virtual WeaponItem::~WeaponItem()
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getAttackDamage()const;
    virtual bool isHandEquipped()const;
    virtual bool canDestroyInCreative()const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void getEnchantSlot()const;
    virtual void getEnchantValue()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;

    WeaponItem(std::string const&, int, Item::Tier const&);
};
