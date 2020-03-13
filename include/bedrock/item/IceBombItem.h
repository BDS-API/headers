#pragma once

#include <string>
#include "ChemistryItem.h"


class IceBombItem : ChemistryItem {

public:
    ~IceBombItem(); // _ZN11IceBombItemD2Ev
    virtual bool isThrowable()const; // _ZNK11IceBombItem11isThrowableEv
    virtual void use(ItemStack &, Player &)const; // _ZNK11IceBombItem3useER9ItemStackR6Player
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK11IceBombItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual void getCooldownType()const; // _ZNK11IceBombItem15getCooldownTypeEv
    virtual void getCooldownTime()const; // _ZNK11IceBombItem15getCooldownTimeEv
    IceBombItem(std::string const&, int); // _ZN11IceBombItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
