#pragma once

class SwampTreeFeature : TreeFeature {

public:
    virtual ~SwampTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void SwampTreeFeature(void);
    void _addVine(BlockSource &, BlockPos, int)const;
};
