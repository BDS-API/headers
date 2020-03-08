#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "../../unmapped/DataLoadHelper"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class Bat : Mob {

public:
    Bat::~Bat()
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
