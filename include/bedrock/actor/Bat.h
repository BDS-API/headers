#pragma once

#include "Mob.h"


class Bat : Mob {

public:
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void checkFallDamage(float, bool);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    ~Bat();
    virtual void newServerAiStep();
    virtual void pushActors();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void normalTick();
    virtual void useNewAi()const;
    Bat(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
