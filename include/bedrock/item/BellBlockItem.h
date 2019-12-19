#pragma once

class BellBlockItem : BlockItem {

public:
    virtual BellBlockItem::~BellBlockItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    BellBlockItem(std::string const&, int);
};
