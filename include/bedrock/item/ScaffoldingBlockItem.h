#pragma once



class ScaffoldingBlockItem : BlockItem {

public:
    virtual ScaffoldingBlockItem::~ScaffoldingBlockItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    ScaffoldingBlockItem(std::string const&, int);
};
