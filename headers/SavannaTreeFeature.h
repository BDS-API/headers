#pragma once

class SavannaTreeFeature : TreeFeature {

public:
    virtual ~SavannaTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void SavannaTreeFeature(Actor *);
    void _placeLeafAt(BlockSource &, BlockPos const&)const;
};
