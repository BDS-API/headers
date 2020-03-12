#pragma once

#include "Mob.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"


class WaterAnimal : Mob {

public:
    virtual void useNewAi()const;
    virtual void aiStep();
    virtual void checkSpawnRules(bool);
    ~WaterAnimal();
    WaterAnimal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
