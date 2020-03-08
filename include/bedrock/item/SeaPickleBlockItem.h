#pragma once



class SeaPickleBlockItem : BlockItem {

public:
    virtual SeaPickleBlockItem::~SeaPickleBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    SeaPickleBlockItem(std::string const&, int);
};
