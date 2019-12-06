#pragma once

class BurstReactionComponent : LabTableReactionComponent {

public:
    virtual ~BurstReactionComponent();
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    void BurstReactionComponent(ParticleType, Vec3 const&, Vec3 const&, int, int, int, bool, HashedString const&);
};
