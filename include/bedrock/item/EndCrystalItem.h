#pragma once

#include <string>
#include "ItemStack.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "ItemStackBase.h"
#include "Item.h"


class EndCrystalItem : Item {

public:
    ~EndCrystalItem();
    virtual bool isGlint(ItemStackBase const&)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    EndCrystalItem(std::string const&, int);
};
