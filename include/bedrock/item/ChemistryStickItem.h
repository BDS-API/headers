#pragma once

#include <string>
#include "ChemistryItem.h"


class ChemistryStickItem : ChemistryItem {

public:
    static long COLOR_BITS;
    static long COLOR_MASK;
    static long ACTIVE_BIT;
    static long DAMAGE_START_BIT;
    static long DAMAGE_BITS;
    static long DAMAGE_MASK;
    static std::string ACTIVATION_TIMESTAMP_TAG;

    virtual void use(ItemStack &, Player &)const;
    ~ChemistryStickItem();
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void fixupOnLoad(ItemStackBase &)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void setMaxDamage(int);
    virtual bool showsDurabilityInCreative()const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual void uniqueAuxValues()const;
    void _activateItem(ItemStack &, unsigned long)const;
    bool isChemistryStick(ItemInstance const&);
    bool isActive(int);
    void _getDamagePercent(ItemStack const&, unsigned long)const;
    ChemistryStickItem(std::string const&, int);
    void getColorType(int);
    void _storeActivationTimestamp(ItemStack &, unsigned long, int)const;
    std::string _getColorName(int)const;
    void _tick(ItemStack &, unsigned long)const;
};
