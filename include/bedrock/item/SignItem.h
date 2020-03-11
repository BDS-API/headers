#pragma once

#include "../util/BlockPos.h"
#include "./Item.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include <string>


class SignItem : Item {

public:
    virtual ~SignItem();
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

//  SignItem(std::string const&, int, SignBlockActor::SignType); //TODO: incomplete function definition
};
