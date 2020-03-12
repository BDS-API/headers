#pragma once

#include "Mob.h"


class WaterAnimal : Mob {

public:
    virtual void checkSpawnRules(bool);
    virtual void aiStep();
    virtual void useNewAi()const;
    ~WaterAnimal();
    WaterAnimal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
