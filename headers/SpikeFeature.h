#pragma once

class SpikeFeature : Feature {

public:
    virtual ~SpikeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void SpikeFeature(SpikeFeature::EndSpike const&);
    void setCrystalInvulnerable(bool);
    void setCrystalBeamTarget(BlockPos const&);
    void placeManually(BlockSource &, BlockPos const&, Random &, Actor *);
    void postProcessMobsAt(BlockSource &, BlockPos const&, Random &)const;
};
