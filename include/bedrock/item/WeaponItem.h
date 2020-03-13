#pragma once

#include <string>
#include "Item.h"


class WeaponItem : Item {

public:
    ~WeaponItem(); // _ZN10WeaponItemD2Ev
    virtual bool canDestroySpecial(Block const&)const; // _ZNK10WeaponItem17canDestroySpecialERK5Block
    virtual void getAttackDamage()const; // _ZNK10WeaponItem15getAttackDamageEv
    virtual bool isHandEquipped()const; // _ZNK10WeaponItem14isHandEquippedEv
    virtual bool canDestroyInCreative()const; // _ZNK10WeaponItem20canDestroyInCreativeEv
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK10WeaponItem24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const; // _ZNK10WeaponItem17isValidRepairItemERK12ItemInstanceS2_
    virtual void getEnchantSlot()const; // _ZNK10WeaponItem14getEnchantSlotEv
    virtual void getEnchantValue()const; // _ZNK10WeaponItem15getEnchantValueEv
    virtual void use(ItemStack &, Player &)const; // _ZNK10WeaponItem3useER9ItemStackR6Player
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const; // _ZNK10WeaponItem15getDestroySpeedERK12ItemInstanceRK5Block
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const; // _ZNK10WeaponItem9hurtEnemyER9ItemStackP3MobS3_
    WeaponItem(std::string const&, int, Item::Tier const&); // _ZN10WeaponItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRKN4Item4TierE
};
