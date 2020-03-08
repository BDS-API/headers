#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "../../unmapped/DataLoadHelper"
#include "../util/BlockPos"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class EnderCrystal : Actor {

public:
    static long HEAL_DISTANCE;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    EnderCrystal::~EnderCrystal()
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
