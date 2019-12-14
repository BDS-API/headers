#pragma once

class BellBlockItem : BlockItem {

public:
    virtual ~BellBlockItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void BellBlockItem(std::string const&, int);
};
