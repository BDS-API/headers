#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "Item.h"


class FertilizerItem : Item {

public:
    ~FertilizerItem(); // _ZN14FertilizerItemD2Ev
    virtual bool isFertilizer(int)const; // _ZNK14FertilizerItem12isFertilizerEi
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK14FertilizerItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK14FertilizerItem6_useOnER9ItemStackR5Actor8BlockPoshfff
//  FertilizerItem(std::string const&, int, FertilizerType); //TODO: incomplete function definition // _ZN14FertilizerItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi14FertilizerType
};
