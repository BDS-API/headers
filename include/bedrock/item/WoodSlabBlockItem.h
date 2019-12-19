#pragma once

class WoodSlabBlockItem : SlabBlockItem {

public:
    virtual WoodSlabBlockItem::~WoodSlabBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;

    WoodSlabBlockItem(std::string const&, int);
};
