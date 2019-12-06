#pragma once

class MegaTreeFeature : TreeFeature {

public:
    virtual ~MegaTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void MegaTreeFeature(Actor *, int, int, int, int);
    void _calcTreeHeigth(Random &)const;
    void _checkIsFree(BlockSource &, BlockPos const&, int)const;
    void _makeDirtFloor(BlockSource &, BlockPos const&)const;
    void _prepareTree(BlockSource &, BlockPos const&, int)const;
    void _placeDoubleTrunkLeaves(BlockSource &, BlockPos const&, int)const;
    void _placeSingleTrunkLeaves(BlockSource &, BlockPos const&, int)const;
    void _getBaseHeight(void)const;
    void _getHeightInterval(void)const;
    void _getTrunkType(void)const;
    void _getLeafType(void)const;
};
