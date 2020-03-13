#pragma once

#include <string>
#include "Item.h"


class CarrotOnAStickItem : Item {

public:
    ~CarrotOnAStickItem(); // _ZN18CarrotOnAStickItemD2Ev
    virtual bool isHandEquipped()const; // _ZNK18CarrotOnAStickItem14isHandEquippedEv
    virtual bool requiresInteract()const; // _ZNK18CarrotOnAStickItem16requiresInteractEv
    virtual void getEnchantSlot()const; // _ZNK18CarrotOnAStickItem14getEnchantSlotEv
    virtual void getEnchantValue()const; // _ZNK18CarrotOnAStickItem15getEnchantValueEv
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const; // _ZNK18CarrotOnAStickItem9mineBlockER9ItemStackRK5BlockiiiP5Actor
    CarrotOnAStickItem(std::string const&, int); // _ZN18CarrotOnAStickItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
