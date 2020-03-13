#pragma once

#include <string>
#include "Item.h"


class RangedWeaponItem : Item {

public:
    ~RangedWeaponItem(); // _ZN16RangedWeaponItemD2Ev
    virtual void getEnchantValue()const; // _ZNK16RangedWeaponItem15getEnchantValueEv
    virtual void use(ItemStack &, Player &)const; // _ZNK16RangedWeaponItem3useER9ItemStackR6Player
    virtual void releaseUsing(ItemStack &, Player *, int)const; // _ZNK16RangedWeaponItem12releaseUsingER9ItemStackP6Playeri
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const; // _ZNK16RangedWeaponItem9hurtEnemyER9ItemStackP3MobS3_
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const; // _ZNK16RangedWeaponItem9mineBlockER9ItemStackRK5BlockiiiP5Actor
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const; // _ZNK16RangedWeaponItem20getAnimationFrameForEP3MobbPK9ItemStackb
    RangedWeaponItem(std::string const&, int); // _ZN16RangedWeaponItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void getLaunchPower(int, int, int)const; // _ZNK16RangedWeaponItem14getLaunchPowerEiii
};
