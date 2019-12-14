#pragma once

class TopSnowBlockItem : BlockItem {

public:
    virtual ~TopSnowBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void TopSnowBlockItem(std::string const&, int);
};
