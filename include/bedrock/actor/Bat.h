#pragma once

#include "Mob.h"


class Bat : Mob {

public:
    ~Bat(); // _ZN3BatD2Ev
    virtual void normalTick(); // _ZN3Bat10normalTickEv
    virtual void checkFallDamage(float, bool); // _ZN3Bat15checkFallDamageEfb
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN3Bat5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN3Bat22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN3Bat21addAdditionalSaveDataER11CompoundTag
    virtual void pushActors(); // _ZN3Bat10pushActorsEv
    virtual void useNewAi()const; // _ZNK3Bat8useNewAiEv
    virtual void newServerAiStep(); // _ZN3Bat15newServerAiStepEv
    Bat(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN3BatC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
