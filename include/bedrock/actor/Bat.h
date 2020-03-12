#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "Mob.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"


class Bat : Mob {

public:
    virtual void newServerAiStep();
    virtual void normalTick();
    virtual void pushActors();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    ~Bat();
    virtual void useNewAi()const;
    virtual void checkFallDamage(float, bool);
    Bat(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
