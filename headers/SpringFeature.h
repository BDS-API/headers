#pragma once

class SpringFeature : Feature {

public:
    virtual ~SpringFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void SpringFeature(Block const&);
};
