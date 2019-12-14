#pragma once

class WoodSlabBlockItem : SlabBlockItem {

public:
    virtual ~WoodSlabBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;

    void WoodSlabBlockItem(std::string const&, int);
};
