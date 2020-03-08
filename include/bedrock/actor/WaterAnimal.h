#pragma once

#include "unmapped/ActorDefinitionIdentifier"
#include "unmapped/ActorDefinitionGroup"


class WaterAnimal : Mob {

public:
    WaterAnimal::~WaterAnimal()
    virtual void aiStep();
    virtual void checkSpawnRules(bool);
    virtual void useNewAi()const;

    WaterAnimal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
