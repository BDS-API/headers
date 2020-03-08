#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"


class SignItem : Item {

public:
    virtual SignItem::~SignItem()
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    SignItem(std::string const&, int, SignBlockActor::SignType);
};
