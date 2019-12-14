#pragma once

class BambooBlockItem : BlockItem {

public:
    virtual ~BambooBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void BambooBlockItem(std::string const&, int);
};
