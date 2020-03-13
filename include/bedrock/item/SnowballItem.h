#pragma once

#include <string>
#include "Item.h"


class SnowballItem : Item {

public:
    ~SnowballItem(); // _ZN12SnowballItemD2Ev
    virtual bool isThrowable()const; // _ZNK12SnowballItem11isThrowableEv
    virtual void use(ItemStack &, Player &)const; // _ZNK12SnowballItem3useER9ItemStackR6Player
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK12SnowballItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    SnowballItem(std::string const&, int); // _ZN12SnowballItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
