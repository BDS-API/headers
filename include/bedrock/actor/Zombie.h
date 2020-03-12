#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "HumanoidMonster.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "damagesource/ActorDamageSource.h"


class Zombie : HumanoidMonster {

public:
    static long SPAWN_BONUS_UUID;
    static long SPAWN_REINFORCEMENTS_CHANCE;

    virtual void getArmorValue();
    ~Zombie();
    virtual void getRidingHeight();
    virtual void die(ActorDamageSource const&);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void useNewAi()const;
    virtual void checkSpawnRules(bool);
    virtual void shouldDespawn()const;
    Zombie(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
//  void setZombieType(Zombie::ZombieType); //TODO: incomplete function definition
    void getZombieType()const;
};
