#pragma once

#include "Actor.h"


class EnderCrystal : Actor {

public:
    static long HEAL_DISTANCE;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN12EnderCrystal15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN12EnderCrystal21reloadHardcodedClientEN5Actor20InitializationMethodERK20VariantParameterList
    ~EnderCrystal(); // _ZN12EnderCrystalD2Ev
    virtual void normalTick(); // _ZN12EnderCrystal10normalTickEv
    virtual void getShadowRadius()const; // _ZNK12EnderCrystal15getShadowRadiusEv
    virtual bool isPickable(); // _ZN12EnderCrystal10isPickableEv
    virtual bool isInvulnerableTo(ActorDamageSource const&)const; // _ZNK12EnderCrystal16isInvulnerableToERK17ActorDamageSource
    virtual void onSynchedDataUpdate(int); // _ZN12EnderCrystal19onSynchedDataUpdateEi
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN12EnderCrystal5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN12EnderCrystal22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN12EnderCrystal21addAdditionalSaveDataER11CompoundTag
    EnderCrystal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN12EnderCrystalC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void setBeamTarget(BlockPos const&); // _ZN12EnderCrystal13setBeamTargetERK8BlockPos
};
