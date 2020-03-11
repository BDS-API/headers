#pragma once

#include "../actor/Mob.h"
#include <string>
#include "./ChemistryItem.h"
#include "./ItemStackBase.h"
#include "./ItemInstance.h"
#include "../level/Level.h"
#include "../actor/Actor.h"
#include "../actor/Player.h"
#include "./ItemStack.h"
#include "../../unmapped/Block.h"


class ChemistryStickItem : ChemistryItem {

public:
    static long COLOR_BITS;
    static long COLOR_MASK;
    static long ACTIVE_BIT;
    static long DAMAGE_START_BIT;
    static long DAMAGE_BITS;
    static long DAMAGE_MASK;
    static std::string ACTIVATION_TIMESTAMP_TAG;

    virtual ~ChemistryStickItem();
    virtual void setMaxDamage(int);
    virtual bool showsDurabilityInCreative()const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void uniqueAuxValues()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual void fixupOnLoad(ItemStackBase &)const;

    ChemistryStickItem(std::string const&, int);
    bool isActive(int);
    void getColorType(int);
    bool isChemistryStick(ItemInstance const&);
    std::string _getColorName(int)const;
    void _activateItem(ItemStack &, unsigned long)const;
    void _tick(ItemStack &, unsigned long)const;
    void _storeActivationTimestamp(ItemStack &, unsigned long, int)const;
    void _getDamagePercent(ItemStack const&, unsigned long)const;
};
