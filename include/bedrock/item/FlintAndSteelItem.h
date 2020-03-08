#pragma once

#include "../../unmapped/BlockSource"


class FlintAndSteelItem : Item {

public:
    virtual FlintAndSteelItem::~FlintAndSteelItem();
    virtual bool isDestructive(int)const;
    virtual void getEnchantSlot(void)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    FlintAndSteelItem(std::string const&, int);
};
