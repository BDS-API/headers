#pragma once

class SeagrassFeature : Feature {

public:
    virtual ~SeagrassFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void SeagrassFeature(void);
    void _isNotIce(BlockSource &, BlockPos const&)const;
};
