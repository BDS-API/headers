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

    ~ChemistryStickItem(); // _ZN18ChemistryStickItemD2Ev
    virtual void setMaxDamage(int); // _ZN18ChemistryStickItem12setMaxDamageEi
    virtual bool showsDurabilityInCreative()const; // _ZNK18ChemistryStickItem25showsDurabilityInCreativeEv
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const; // _ZNK18ChemistryStickItem17isValidRepairItemERK12ItemInstanceS2_
    virtual void uniqueAuxValues()const; // _ZNK18ChemistryStickItem15uniqueAuxValuesEv
    virtual void use(ItemStack &, Player &)const; // _ZNK18ChemistryStickItem3useER9ItemStackR6Player
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const; // _ZNK18ChemistryStickItem15useTimeDepletedER9ItemStackP5LevelP6Player
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const; // _ZNK18ChemistryStickItem9hurtEnemyER9ItemStackP3MobS3_
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const; // _ZNK18ChemistryStickItem9mineBlockER9ItemStackRK5BlockiiiP5Actor
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const; // _ZNK18ChemistryStickItem13inventoryTickER9ItemStackR5LevelR5Actorib
    virtual void fixupOnLoad(ItemStackBase &)const; // _ZNK18ChemistryStickItem11fixupOnLoadER13ItemStackBase
    ChemistryStickItem(std::string const&, int); // _ZN18ChemistryStickItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    bool isActive(int); // _ZN18ChemistryStickItem8isActiveEi
    void getColorType(int); // _ZN18ChemistryStickItem12getColorTypeEi
    bool isChemistryStick(ItemInstance const&); // _ZN18ChemistryStickItem16isChemistryStickERK12ItemInstance
    std::string _getColorName(int)const; // _ZNK18ChemistryStickItem13_getColorNameB5cxx11Ei
    void _activateItem(ItemStack &, unsigned long)const; // _ZNK18ChemistryStickItem13_activateItemER9ItemStackm
    void _tick(ItemStack &, unsigned long)const; // _ZNK18ChemistryStickItem5_tickER9ItemStackm
    void _storeActivationTimestamp(ItemStack &, unsigned long, int)const; // _ZNK18ChemistryStickItem25_storeActivationTimestampER9ItemStackmi
    void _getDamagePercent(ItemStack const&, unsigned long)const; // _ZNK18ChemistryStickItem17_getDamagePercentERK9ItemStackm
};
