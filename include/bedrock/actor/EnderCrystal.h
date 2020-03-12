#pragma once

#include "Actor.h"


class EnderCrystal : Actor {

public:
    static long HEAL_DISTANCE;

//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool isPickable();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void getShadowRadius()const;
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void onSynchedDataUpdate(int);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void normalTick();
    ~EnderCrystal();
    EnderCrystal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setBeamTarget(BlockPos const&);
};
