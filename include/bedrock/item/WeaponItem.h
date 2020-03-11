#pragma once

#include "../actor/Mob.h"
#include <string>
#include "./ItemStackBase.h"
#include "../../unmapped/Tier.h"
#include "./ItemInstance.h"
#include "./Item.h"
#include "../level/Level.h"
#include "../actor/Player.h"
#include "./ItemStack.h"
#include "../../unmapped/Block.h"


class WeaponItem : Item {

public:
    virtual ~WeaponItem();
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
