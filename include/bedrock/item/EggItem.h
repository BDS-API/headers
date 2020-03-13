#pragma once

#include <string>
#include "Item.h"


class EggItem : Item {

public:
    ~EggItem(); // _ZN7EggItemD2Ev
    virtual bool isThrowable()const; // _ZNK7EggItem11isThrowableEv
    virtual void use(ItemStack &, Player &)const; // _ZNK7EggItem3useER9ItemStackR6Player
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK7EggItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    EggItem(std::string const&, int); // _ZN7EggItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
