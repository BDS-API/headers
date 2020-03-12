#pragma once

#include "ChemistryItem.h"
#include "ItemStack.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../actor/Mob.h"
#include "ItemInstance.h"
#include "../level/Level.h"
#include "ItemStackBase.h"


class ChemistryStickItem : ChemistryItem {

public:
    static long COLOR_BITS;
    static long COLOR_MASK;
    static long ACTIVE_BIT;
    static long DAMAGE_START_BIT;
    static long DAMAGE_BITS;
    static long DAMAGE_MASK;
    static std::string ACTIVATION_TIMESTAMP_TAG;

    virtual void setMaxDamage(int);
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual bool showsDurabilityInCreative()const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void uniqueAuxValues()const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    ~ChemistryStickItem();
    virtual void fixupOnLoad(ItemStackBase &)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    ChemistryStickItem(std::string const&, int);
    bool isChemistryStick(ItemInstance const&);
    void getColorType(int);
    void _tick(ItemStack &, unsigned long)const;
    void _activateItem(ItemStack &, unsigned long)const;
    std::string _getColorName(int)const;
    void _getDamagePercent(ItemStack const&, unsigned long)const;
    bool isActive(int);
    void _storeActivationTimestamp(ItemStack &, unsigned long, int)const;
};
