#pragma once

class BalloonItem : ChemistryItem {

public:
    virtual ~BalloonItem();
    virtual void getColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&, ItemDescriptor const&)const;
    virtual bool isTintable(void)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&,std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>> const&)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void BalloonItem(std::string const&, int);
    void _getColorIndex(ItemDescriptor const&)const;
    bool canAttachToBlock(BlockPos const&, BlockSource const&);
    void _createKnot(BlockSource &, BlockPos, ItemInstance const&)const;
    void getBalloonSpawnPos(BlockPos const&);
};
