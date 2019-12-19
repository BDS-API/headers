#pragma once

class IceSpikeFeature : Feature {

public:
    virtual IceSpikeFeature::~IceSpikeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    IceSpikeFeature(void);
    void _isValidPlaceBlock(Block const&)const;
};
