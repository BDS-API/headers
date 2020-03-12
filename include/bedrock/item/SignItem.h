#pragma once

#include <string>
#include "Item.h"
#include "../util/BlockPos.h"


class SignItem : Item {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ~SignItem();
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
//  SignItem(std::string const&, int, SignBlockActor::SignType); //TODO: incomplete function definition
};
