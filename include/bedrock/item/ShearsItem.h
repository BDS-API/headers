#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "Item.h"


class ShearsItem : Item {

public:
    ~ShearsItem(); // _ZN10ShearsItemD2Ev
    virtual bool canDestroySpecial(Block const&)const; // _ZNK10ShearsItem17canDestroySpecialERK5Block
    virtual void getEnchantSlot()const; // _ZNK10ShearsItem14getEnchantSlotEv
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK10ShearsItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const; // _ZNK10ShearsItem15getDestroySpeedERK12ItemInstanceRK5Block
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const; // _ZNK10ShearsItem9hurtEnemyER9ItemStackP3MobS3_
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const; // _ZNK10ShearsItem9mineBlockER9ItemStackRK5BlockiiiP5Actor
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK10ShearsItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    ShearsItem(std::string const&, int); // _ZN10ShearsItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
