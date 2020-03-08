#pragma once



class RedStoneDustItem : Item {

public:
    virtual RedStoneDustItem::~RedStoneDustItem();
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    RedStoneDustItem(std::string const&, int);
};
