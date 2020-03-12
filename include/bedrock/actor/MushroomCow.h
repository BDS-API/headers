#pragma once

#include "Animal.h"


class MushroomCow : Animal {

public:
    virtual void checkSpawnRules(bool);
    ~MushroomCow();
    MushroomCow(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _isFloorMycelium(BlockPos const&);
};
