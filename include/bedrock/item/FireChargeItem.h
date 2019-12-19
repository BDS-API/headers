#pragma once

class FireChargeItem : Item {

public:
    virtual FireChargeItem::~FireChargeItem();
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    FireChargeItem(std::string const&, int);
};
