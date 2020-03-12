#pragma once

#include "ItemStack.h"
#include <string>
#include "ItemInstance.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../actor/Mob.h"
#include "Item.h"
#include "../level/Level.h"
#include "ItemStackBase.h"


class WeaponItem : Item {

public:
    ~WeaponItem();
    virtual void getAttackDamage()const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual bool canDestroyInCreative()const;
    virtual bool canDestroySpecial(Block const&)const;
    virtual bool isHandEquipped()const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void getEnchantValue()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void getEnchantSlot()const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    WeaponItem(std::string const&, int, Item::Tier const&);
};
