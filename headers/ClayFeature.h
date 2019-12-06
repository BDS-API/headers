#pragma once

class ClayFeature : Feature {

public:
    virtual ~ClayFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void ClayFeature(int);
};
