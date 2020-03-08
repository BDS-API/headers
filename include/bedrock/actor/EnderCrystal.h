#pragma once

#include "damagesource/ActorDamageSource"
#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "../util/BlockPos"
#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class EnderCrystal : Actor {

public:
    static long HEAL_DISTANCE;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual EnderCrystal::~EnderCrystal()
    virtual void normalTick();
    virtual void getShadowRadius()const;
    virtual bool isPickable();
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void onSynchedDataUpdate(int);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    EnderCrystal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setBeamTarget(BlockPos const&);
};
