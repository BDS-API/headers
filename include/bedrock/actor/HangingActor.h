#pragma once

#include "Actor.h"


class HangingActor : Actor {

public:
    static long HANGING_OFFSET;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN12HangingActor15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN12HangingActor21reloadHardcodedClientEN5Actor20InitializationMethodERK20VariantParameterList
    ~HangingActor(); // _ZN12HangingActorD2Ev
    virtual void move(Vec3 const&); // _ZN12HangingActor4moveERK4Vec3
    virtual void normalTick(); // _ZN12HangingActor10normalTickEv
    virtual void getBrightness(float)const; // _ZNK12HangingActor13getBrightnessEf
    virtual bool isPickable(); // _ZN12HangingActor10isPickableEv
    virtual bool isInvulnerableTo(ActorDamageSource const&)const; // _ZNK12HangingActor16isInvulnerableToERK17ActorDamageSource
    virtual void setSize(float, float); // _ZN12HangingActor7setSizeEff
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN12HangingActor5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN12HangingActor22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN12HangingActor21addAdditionalSaveDataER11CompoundTag
    virtual void setDir(int); // _ZN12HangingActor6setDirEi
    virtual void placeHangingEntity(BlockSource &, int); // _ZN12HangingActor18placeHangingEntityER11BlockSourcei
    virtual void wouldSurvive(BlockSource &); // _ZN12HangingActor12wouldSurviveER11BlockSource
    HangingActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN12HangingActorC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void init(); // _ZN12HangingActor4initEv
    void _offs(int)const; // _ZNK12HangingActor5_offsEi
    void _calculateBlockPosFromPosition()const; // _ZNK12HangingActor30_calculateBlockPosFromPositionEv
    void _calculateActorPositionFromPlacementPosition(BlockPos const&); // _ZN12HangingActor44_calculateActorPositionFromPlacementPositionERK8BlockPos
    void _calculateAABB(); // _ZN12HangingActor14_calculateAABBEv
    void _wouldSurvive(BlockSource &, BlockPos const&); // _ZN12HangingActor13_wouldSurviveER11BlockSourceRK8BlockPos
    void dropItem(); // _ZN12HangingActor8dropItemEv
    void getDirection()const; // _ZNK12HangingActor12getDirectionEv
};
