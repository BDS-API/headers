#pragma once

#include <string>
#include "Item.h"
#include "../util/BlockPos.h"


class EndCrystalItem : Item {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual bool isGlint(ItemStackBase const&)const;
    ~EndCrystalItem();
    EndCrystalItem(std::string const&, int);
};
