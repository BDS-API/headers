#pragma once

#include "../util/BlockPos.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Animal.h"


class MushroomCow : Animal {

public:
    virtual ~MushroomCow();
    virtual void checkSpawnRules(bool);

    MushroomCow(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _isFloorMycelium(BlockPos const&);
};
