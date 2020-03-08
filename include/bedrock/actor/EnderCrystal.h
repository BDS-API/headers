#pragma once

#include "../../unmapped/BlockPos"
#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "../nbt/CompoundTag"
#include "damagesource/ActorDamageSource"


class EnderCrystal : Actor {

public:
    static long HEAL_DISTANCE;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual EnderCrystal::~EnderCrystal();
    virtual void normalTick(void);
    virtual void getShadowRadius(void)const;
    virtual bool isPickable(void);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void onSynchedDataUpdate(int);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    EnderCrystal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setBeamTarget(BlockPos const&);
};
