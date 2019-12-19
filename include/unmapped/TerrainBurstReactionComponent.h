#pragma once

class TerrainBurstReactionComponent : LabTableReactionComponent {

public:
    virtual TerrainBurstReactionComponent::~TerrainBurstReactionComponent();
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    TerrainBurstReactionComponent(Block const&, Vec3 const&, Vec3 const&, int, bool);
};
