#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "damagesource/ActorDamageSource"


class Zombie : HumanoidMonster {

public:
    static long SPAWN_BONUS_UUID;
    static long SPAWN_REINFORCEMENTS_CHANCE;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual Zombie::~Zombie();
    virtual void getRidingHeight(void);
    virtual void die(ActorDamageSource const&);
    virtual void checkSpawnRules(bool);
    virtual void shouldDespawn(void)const;
    virtual void getArmorValue(void);
    virtual void useNewAi(void)const;

    Zombie(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setZombieType(Zombie::ZombieType);
    void getZombieType(void)const;
};
