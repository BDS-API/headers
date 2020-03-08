#pragma once

#include "../../../unmapped/DataLoadHelper"
#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class ConduitBlockActor : BlockActor {

public:
    ConduitBlockActor::~ConduitBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual bool hasAlphaLayer()const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    ConduitBlockActor(BlockPos const&);
    void _animateTick(BlockSource &)const;
    void _checkShape(BlockSource &);
    void _applyEffects(BlockSource &);
    void _updateTarget(BlockSource &);
    void setEffectRange(int);
    void incrementAnimationValue(float);
    void incrementWindLevel();
    bool isActive()const;
    void setShellRotation(float);
};
