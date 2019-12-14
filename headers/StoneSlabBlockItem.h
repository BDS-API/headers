#pragma once

class StoneSlabBlockItem : SlabBlockItem {

public:
    virtual ~StoneSlabBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;

    void StoneSlabBlockItem(std::string const&, int);
};
