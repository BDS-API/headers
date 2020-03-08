#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionIdentifier"


class Zombie : HumanoidMonster {

public:
    static long SPAWN_BONUS_UUID;
    static long SPAWN_REINFORCEMENTS_CHANCE;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    Zombie::~Zombie()
    virtual void getRidingHeight();
    virtual void die(ActorDamageSource const&);
    virtual void checkSpawnRules(bool);
    virtual void shouldDespawn()const;
    virtual void getArmorValue();
    virtual void useNewAi()const;

    Zombie(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setZombieType(Zombie::ZombieType);
    void getZombieType()const;
};
