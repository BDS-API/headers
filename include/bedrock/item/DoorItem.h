#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "Item.h"


class DoorItem : public Item {

public:
    virtual ~DoorItem(); // _ZN8DoorItemD2Ev
    virtual void __fake_function0(); // fake
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK8DoorItem6_useOnER9ItemStackR5Actor8BlockPoshfff
//    DoorItem(std::string const&, int, long); //TODO: incomplete function definition // _ZN8DoorItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiN9DoorBlock8DoorTypeE
    void place(BlockSource *, int, int, int, int, Block const*); // _ZN8DoorItem5placeEP11BlockSourceiiiiPK5Block
};
