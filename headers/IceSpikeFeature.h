#pragma once

class IceSpikeFeature : Feature {

public:
    virtual ~IceSpikeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void IceSpikeFeature(void);
    void _isValidPlaceBlock(Block const&)const;
};
