#pragma once

#include <string>
#include "ItemStack.h"
#include "Item.h"


class TridentItem : Item {

public:
    static long THROW_THRESHOLD_TIME;
    static long CHARGE_THRESHOLD_TIME;

    ~TridentItem(); // _ZN11TridentItemD2Ev
    virtual void getMaxDamage()const; // _ZNK11TridentItem12getMaxDamageEv
    virtual void getAttackDamage()const; // _ZNK11TridentItem15getAttackDamageEv
    virtual bool canDestroyInCreative()const; // _ZNK11TridentItem20canDestroyInCreativeEv
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK11TridentItem24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual void getEnchantSlot()const; // _ZNK11TridentItem14getEnchantSlotEv
    virtual void getEnchantValue()const; // _ZNK11TridentItem15getEnchantValueEv
    virtual void use(ItemStack &, Player &)const; // _ZNK11TridentItem3useER9ItemStackR6Player
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK11TridentItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual void releaseUsing(ItemStack &, Player *, int)const; // _ZNK11TridentItem12releaseUsingER9ItemStackP6Playeri
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const; // _ZNK11TridentItem9hurtEnemyER9ItemStackP3MobS3_
    TridentItem(std::string const&, int); // _ZN11TridentItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _setupProjectile(Actor *, ItemStack, bool)const; // _ZNK11TridentItem16_setupProjectileEP5Actor9ItemStackb
};
