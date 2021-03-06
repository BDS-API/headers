#pragma once

#include <string>
#include "Item.h"


class EnchantedBookItem : public Item {

public:
    virtual ~EnchantedBookItem(); // _ZN17EnchantedBookItemD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isGlint(ItemStackBase const&)const; // _ZNK17EnchantedBookItem7isGlintERK13ItemStackBase
    virtual void getEnchantSlot()const; // _ZNK17EnchantedBookItem14getEnchantSlotEv
    virtual void getEnchantValue()const; // _ZNK17EnchantedBookItem15getEnchantValueEv
    EnchantedBookItem(std::string const&, int, bool); // _ZN17EnchantedBookItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib
};
