#pragma once

#include "HumanoidMonster.h"


class Zombie : HumanoidMonster {

public:
    static long SPAWN_BONUS_UUID;
    static long SPAWN_REINFORCEMENTS_CHANCE;

    virtual void shouldDespawn()const;
    ~Zombie();
    virtual void useNewAi()const;
    virtual void checkSpawnRules(bool);
    virtual void getArmorValue();
    virtual void die(ActorDamageSource const&);
    virtual void getRidingHeight();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
//  void setZombieType(Zombie::ZombieType); //TODO: incomplete function definition
    Zombie(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getZombieType()const;
};
