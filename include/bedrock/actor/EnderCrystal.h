#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "Actor.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"


class EnderCrystal : Actor {

public:
    static long HEAL_DISTANCE;

    virtual void normalTick();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    ~EnderCrystal();
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void onSynchedDataUpdate(int);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual bool isPickable();
    virtual void getShadowRadius()const;
    EnderCrystal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setBeamTarget(BlockPos const&);
};
