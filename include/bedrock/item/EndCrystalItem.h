#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"


class EndCrystalItem : Item {

public:
    virtual EndCrystalItem::~EndCrystalItem()
    virtual bool isGlint(ItemStackBase const&)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    EndCrystalItem(std::string const&, int);
};
