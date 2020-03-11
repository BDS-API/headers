#pragma once

#include "./ItemStackBase.h"
#include "../util/BlockPos.h"
#include "./Item.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include <string>


class EndCrystalItem : Item {

public:
    virtual ~EndCrystalItem();
    virtual bool isGlint(ItemStackBase const&)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    EndCrystalItem(std::string const&, int);
};
