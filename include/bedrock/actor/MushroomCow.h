#pragma once

#include "Animal.h"


class MushroomCow : Animal {

public:
    ~MushroomCow(); // _ZN11MushroomCowD2Ev
    virtual void checkSpawnRules(bool); // _ZN11MushroomCow15checkSpawnRulesEb
    MushroomCow(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN11MushroomCowC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void _isFloorMycelium(BlockPos const&); // _ZN11MushroomCow16_isFloorMyceliumERK8BlockPos
};
