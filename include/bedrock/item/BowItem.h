#pragma once

#include <string>
#include "RangedWeaponItem.h"


class BowItem : RangedWeaponItem {

public:
    ~BowItem(); // _ZN7BowItemD2Ev
    virtual void getEnchantSlot()const; // _ZNK7BowItem14getEnchantSlotEv
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK7BowItem7getIconERK13ItemStackBaseib
    virtual void setIcon(std::string const&, int); // _ZN7BowItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    BowItem(std::string const&, int); // _ZN7BowItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
