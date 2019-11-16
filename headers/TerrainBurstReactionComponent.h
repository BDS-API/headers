#pragma once

class TerrainBurstReactionComponent : LabTableReactionComponent {

    virtual ~TerrainBurstReactionComponent();
    virtual ~TerrainBurstReactionComponent();
    virtual void _onStart(LabTableReaction &, BlockSource &);
    virtual void _onTick(LabTableReaction &, BlockSource &);
    virtual void _onEnd(LabTableReaction &, BlockSource &);
}
