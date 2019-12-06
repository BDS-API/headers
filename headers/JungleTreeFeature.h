#pragma once

class JungleTreeFeature : TreeFeature {

public:
    virtual ~JungleTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void JungleTreeFeature(Actor *);
};
