#pragma once

#include "BlockActor.h"


class ConduitBlockActor : BlockActor {

public:
    ~ConduitBlockActor(); // _ZN17ConduitBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN17ConduitBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK17ConduitBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN17ConduitBlockActor4tickER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN17ConduitBlockActor15getUpdatePacketER11BlockSource
    virtual bool hasAlphaLayer()const; // _ZNK17ConduitBlockActor13hasAlphaLayerEv
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN17ConduitBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    ConduitBlockActor(BlockPos const&); // _ZN17ConduitBlockActorC2ERK8BlockPos
    void _animateTick(BlockSource &)const; // _ZNK17ConduitBlockActor12_animateTickER11BlockSource
    void _checkShape(BlockSource &); // _ZN17ConduitBlockActor11_checkShapeER11BlockSource
    void _applyEffects(BlockSource &); // _ZN17ConduitBlockActor13_applyEffectsER11BlockSource
    void _updateTarget(BlockSource &); // _ZN17ConduitBlockActor13_updateTargetER11BlockSource
    void setEffectRange(int); // _ZN17ConduitBlockActor14setEffectRangeEi
    void incrementAnimationValue(float); // _ZN17ConduitBlockActor23incrementAnimationValueEf
    void incrementWindLevel(); // _ZN17ConduitBlockActor18incrementWindLevelEv
    bool isActive()const; // _ZNK17ConduitBlockActor8isActiveEv
    void setShellRotation(float); // _ZN17ConduitBlockActor16setShellRotationEf
};
