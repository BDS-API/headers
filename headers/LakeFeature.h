#pragma once

class LakeFeature : Feature {

public:
    virtual ~LakeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void LakeFeature(Block const&);
    void LakeFeature(Block const&, Block const&);
    void _check(BlockPos const&, bool *)const;
};
