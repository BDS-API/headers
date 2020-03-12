#pragma once

#include <string>
#include "Item.h"
#include "../util/BlockPos.h"


class FlintAndSteelItem : Item {

public:
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual bool isDestructive(int)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    ~FlintAndSteelItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void getEnchantSlot()const;
    FlintAndSteelItem(std::string const&, int);
};
