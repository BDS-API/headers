#pragma once

#include <string>
#include "Item.h"


class EnderpearlItem : Item {

public:
    ~EnderpearlItem(); // _ZN14EnderpearlItemD2Ev
    virtual bool isThrowable()const; // _ZNK14EnderpearlItem11isThrowableEv
    virtual void use(ItemStack &, Player &)const; // _ZNK14EnderpearlItem3useER9ItemStackR6Player
    virtual void getCooldownType()const; // _ZNK14EnderpearlItem15getCooldownTypeEv
    virtual void getCooldownTime()const; // _ZNK14EnderpearlItem15getCooldownTimeEv
    EnderpearlItem(std::string const&, int); // _ZN14EnderpearlItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
