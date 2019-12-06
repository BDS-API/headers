#pragma once

class DeadBushFeature : Feature {

public:
    virtual ~DeadBushFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void DeadBushFeature(void);
    void _isFree(Material const&)const;
};
