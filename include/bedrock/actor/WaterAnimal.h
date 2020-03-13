#pragma once

#include "Mob.h"


class WaterAnimal : Mob {

public:
    ~WaterAnimal(); // _ZN11WaterAnimalD2Ev
    virtual void aiStep(); // _ZN11WaterAnimal6aiStepEv
    virtual void checkSpawnRules(bool); // _ZN11WaterAnimal15checkSpawnRulesEb
    virtual void useNewAi()const; // _ZNK11WaterAnimal8useNewAiEv
    WaterAnimal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN11WaterAnimalC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
