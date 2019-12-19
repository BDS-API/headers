#pragma once

class SwampTreeFeature : TreeFeature {

public:
    virtual SwampTreeFeature::~SwampTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SwampTreeFeature(void);
    void _addVine(BlockSource &, BlockPos, int)const;
};
