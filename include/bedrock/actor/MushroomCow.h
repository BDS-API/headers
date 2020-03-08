#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../util/BlockPos"
#include "unmapped/ActorDefinitionIdentifier"


class MushroomCow : Animal {

public:
    MushroomCow::~MushroomCow()
    virtual void checkSpawnRules(bool);

    MushroomCow(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _isFloorMycelium(BlockPos const&);
};
