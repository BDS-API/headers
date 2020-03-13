#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "Item.h"


class FlintAndSteelItem : Item {

public:
    ~FlintAndSteelItem(); // _ZN17FlintAndSteelItemD2Ev
    virtual bool isDestructive(int)const; // _ZNK17FlintAndSteelItem13isDestructiveEi
    virtual void getEnchantSlot()const; // _ZNK17FlintAndSteelItem14getEnchantSlotEv
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK17FlintAndSteelItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const; // _ZNK17FlintAndSteelItem9hurtEnemyER9ItemStackP3MobS3_
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const; // _ZNK17FlintAndSteelItem18_calculatePlacePosER9ItemStackR5ActorRhR8BlockPos
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK17FlintAndSteelItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    FlintAndSteelItem(std::string const&, int); // _ZN17FlintAndSteelItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
