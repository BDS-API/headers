#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "Item.h"


class SignItem : Item {

public:
    ~SignItem(); // _ZN8SignItemD2Ev
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const; // _ZNK8SignItem18_calculatePlacePosER9ItemStackR5ActorRhR8BlockPos
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK8SignItem6_useOnER9ItemStackR5Actor8BlockPoshfff
//  SignItem(std::string const&, int, SignBlockActor::SignType); //TODO: incomplete function definition // _ZN8SignItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiN14SignBlockActor8SignTypeE
};
