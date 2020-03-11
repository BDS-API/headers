#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Mob.h"


class WaterAnimal : Mob {

public:
    virtual ~WaterAnimal();
    virtual void aiStep();
    virtual void checkSpawnRules(bool);
    virtual void useNewAi()const;

    WaterAnimal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
