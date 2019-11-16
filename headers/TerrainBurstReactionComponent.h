#pragma once

class TerrainBurstReactionComponent : LabTableReactionComponent {

    virtual void ~TerrainBurstReactionComponent();
    virtual void ~TerrainBurstReactionComponent();
    virtual void _onStart(LabTableReaction &, BlockSource &);
    virtual void _onTick(LabTableReaction &, BlockSource &);
    virtual void _onEnd(LabTableReaction &, BlockSource &);
}
