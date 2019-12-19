#pragma once

class LakeFeature : Feature {

public:
    virtual LakeFeature::~LakeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LakeFeature(Block const&);
    LakeFeature(Block const&, Block const&);
    void _check(BlockPos const&, bool *)const;
};
