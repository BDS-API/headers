#pragma once

#include "Zombie.h"


class PigZombie : Zombie {

public:
    static long SPEED_MODIFIER_ATTACK_UUID;

    virtual void getAttackTime();
    ~PigZombie();
    virtual void checkSpawnRules(bool);
    virtual void findAttackTarget();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void normalTick();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    void _alert(Mob &);
    PigZombie(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
