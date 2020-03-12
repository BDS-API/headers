#pragma once

#include "ItemStack.h"
#include <string>
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "Item.h"


class SignItem : Item {

public:
    ~SignItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
//  SignItem(std::string const&, int, SignBlockActor::SignType); //TODO: incomplete function definition
};
