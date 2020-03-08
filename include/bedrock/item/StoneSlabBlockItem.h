#pragma once



class StoneSlabBlockItem : SlabBlockItem {

public:
    virtual StoneSlabBlockItem::~StoneSlabBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;

    StoneSlabBlockItem(std::string const&, int);
};
