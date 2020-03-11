#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/VariantParameterList.h"
#include "damagesource/ActorDamageSource.h"
#include "./HumanoidMonster.h"
#include "unmapped/ActorDefinitionGroup.h"


class Zombie : HumanoidMonster {

public:
    static long SPAWN_BONUS_UUID;
    static long SPAWN_REINFORCEMENTS_CHANCE;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~Zombie();
    virtual void getRidingHeight();
    virtual void die(ActorDamageSource const&);
    virtual void checkSpawnRules(bool);
    virtual void shouldDespawn()const;
    virtual void getArmorValue();
    virtual void useNewAi()const;

    Zombie(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
//  void setZombieType(Zombie::ZombieType); //TODO: incomplete function definition
    void getZombieType()const;
};
