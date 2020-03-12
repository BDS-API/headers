#pragma once

#include "BlockActor.h"


class ConduitBlockActor : BlockActor {

public:
    ~ConduitBlockActor();
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual bool hasAlphaLayer()const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void getUpdatePacket(BlockSource &);
    void _animateTick(BlockSource &)const;
    void _checkShape(BlockSource &);
    void incrementWindLevel();
    void setShellRotation(float);
    void _updateTarget(BlockSource &);
    void setEffectRange(int);
    ConduitBlockActor(BlockPos const&);
    void incrementAnimationValue(float);
    void _applyEffects(BlockSource &);
    bool isActive()const;
};
