#pragma once

#include "damagesource/ActorDamageSource"
#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class Bat : Mob {

public:
    virtual Bat::~Bat()
    virtual void normalTick();
    virtual void checkFallDamage(float, bool);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void pushActors();
    virtual void useNewAi()const;
    virtual void newServerAiStep();

    Bat(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
