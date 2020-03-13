#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "Item.h"


class HangingActorItem : Item {

public:
    ~HangingActorItem(); // _ZN16HangingActorItemD2Ev
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK16HangingActorItem6_useOnER9ItemStackR5Actor8BlockPoshfff
//  HangingActorItem(std::string const&, int, ActorType); //TODO: incomplete function definition // _ZN16HangingActorItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi9ActorType
};
