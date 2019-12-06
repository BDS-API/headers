#pragma once

class Feature : IFeature {

public:
    virtual ~Feature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    void Feature(Actor *);
    void _setManuallyPlaced(Actor *);
    void _getManuallyPlaced(void)const;
    void setTransaction(WorldChangeTransaction *);
    void _placeBlock(BlockSource &, BlockPos const&, Block const&)const;
    void _getBlock(BlockSource &, BlockPos const&)const;
    void _isEmptyBlock(BlockSource &, BlockPos const&)const;
    void _getMaterial(BlockSource &, BlockPos const&)const;
};
