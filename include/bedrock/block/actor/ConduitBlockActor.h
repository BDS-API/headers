#pragma once

#include "BlockActor.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"


class ConduitBlockActor : BlockActor {

public:
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void getUpdatePacket(BlockSource &);
    ~ConduitBlockActor();
    virtual void tick(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual bool hasAlphaLayer()const;
    void incrementWindLevel();
    void _checkShape(BlockSource &);
    void incrementAnimationValue(float);
    bool isActive()const;
    void _applyEffects(BlockSource &);
    void _updateTarget(BlockSource &);
    ConduitBlockActor(BlockPos const&);
    void _animateTick(BlockSource &)const;
    void setEffectRange(int);
    void setShellRotation(float);
};
