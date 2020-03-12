#pragma once

#include <string>
#include "Item.h"
#include "../util/BlockPos.h"


class ShearsItem : Item {

public:
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual bool canDestroySpecial(Block const&)const;
    ~ShearsItem();
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void getEnchantSlot()const;
    ShearsItem(std::string const&, int);
};
