#pragma once

class SpruceFeature : TreeFeature {

public:
    virtual ~SpruceFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void SpruceFeature(Actor *);
};
