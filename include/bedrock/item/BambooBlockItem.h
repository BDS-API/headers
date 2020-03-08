#pragma once



class BambooBlockItem : BlockItem {

public:
    virtual BambooBlockItem::~BambooBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    BambooBlockItem(std::string const&, int);
};
