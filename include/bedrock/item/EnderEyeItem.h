#pragma once

#include <string>
#include "Item.h"


class EnderEyeItem : Item {

public:
    ~EnderEyeItem(); // _ZN12EnderEyeItemD2Ev
    virtual bool isThrowable()const; // _ZNK12EnderEyeItem11isThrowableEv
    virtual void use(ItemStack &, Player &)const; // _ZNK12EnderEyeItem3useER9ItemStackR6Player
    EnderEyeItem(std::string const&, int); // _ZN12EnderEyeItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
