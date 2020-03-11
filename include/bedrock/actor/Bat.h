#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Mob.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"


class Bat : Mob {

public:
    virtual ~Bat();
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
