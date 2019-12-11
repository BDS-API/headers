#pragma once

class OakFeature : TreeFeature {

public:
    virtual ~OakFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void OakFeature(Actor *, bool);
};
