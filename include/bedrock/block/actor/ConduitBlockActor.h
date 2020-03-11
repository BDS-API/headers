#pragma once

#include "../../nbt/CompoundTag.h"
#include "./BlockActor.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../unmapped/BlockSource.h"


class ConduitBlockActor : BlockActor {

public:
    virtual ~ConduitBlockActor();
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
