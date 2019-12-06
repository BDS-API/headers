#pragma once

class TerrainBurstReactionComponent : LabTableReactionComponent {

public:
    virtual ~TerrainBurstReactionComponent();
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    void TerrainBurstReactionComponent(Block const&, Vec3 const&, Vec3 const&, int, bool);
};
