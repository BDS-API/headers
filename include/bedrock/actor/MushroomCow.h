#pragma once

#include "../../unmapped/BlockPos"
#include "../../unmapped/ActorDefinitionGroup"


class MushroomCow : Animal {

public:
    virtual MushroomCow::~MushroomCow();
    virtual void checkSpawnRules(bool);

    MushroomCow(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _isFloorMycelium(BlockPos const&);
};
