#pragma once

class HellSpringFeature : Feature {

public:
    virtual ~HellSpringFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void HellSpringFeature(Block const&, bool);
};
