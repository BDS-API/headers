#pragma once

#include <string>
#include "Item.h"


class ComplexItem : Item {

public:
    ~ComplexItem(); // _ZN11ComplexItemD2Ev
    virtual bool isComplex()const; // _ZNK11ComplexItem9isComplexEv
    virtual void getUpdatePacket(ItemStack const&, Level &, Actor &)const; // _ZNK11ComplexItem15getUpdatePacketERK9ItemStackR5LevelR5Actor
    ComplexItem(std::string const&, int); // _ZN11ComplexItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
