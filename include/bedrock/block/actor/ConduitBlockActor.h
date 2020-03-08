#pragma once

#include "../../../unmapped/BlockPos"
#include "../../level/Level"
#include "../../../unmapped/BlockSource"
#include "../../nbt/CompoundTag"


class ConduitBlockActor : BlockActor {

public:
    virtual ConduitBlockActor::~ConduitBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual bool hasAlphaLayer(void)const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    ConduitBlockActor(BlockPos const&);
    void _animateTick(BlockSource &)const;
    void _checkShape(BlockSource &);
    void _applyEffects(BlockSource &);
    void _updateTarget(BlockSource &);
    void setEffectRange(int);
    void incrementAnimationValue(float);
    void incrementWindLevel(void);
    bool isActive(void)const;
    void setShellRotation(float);
};
