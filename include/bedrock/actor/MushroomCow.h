#pragma once

#include "Animal.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"


class MushroomCow : Animal {

public:
    ~MushroomCow();
    virtual void checkSpawnRules(bool);
    MushroomCow(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _isFloorMycelium(BlockPos const&);
};
