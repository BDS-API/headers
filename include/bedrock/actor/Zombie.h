#pragma once

#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionIdentifier"


class Zombie : HumanoidMonster {

public:
    static long SPAWN_BONUS_UUID;
    static long SPAWN_REINFORCEMENTS_CHANCE;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual Zombie::~Zombie()
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
