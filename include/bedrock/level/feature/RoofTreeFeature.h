#pragma once

class RoofTreeFeature : TreeFeature {

public:
    virtual RoofTreeFeature::~RoofTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    RoofTreeFeature(Actor *);
    void _placeVines(BlockSource &, BlockPos const&, Random &, bool, int, int)const;
    void _placeLeafs(BlockSource &, BlockPos const&, BlockPos const&, Random &)const;
    void _placeVine(BlockSource &, BlockPos const&, Random &, int)const;
    void _placeLeafAt(BlockSource &, BlockPos const&)const;
};
