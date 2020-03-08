#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "../util/BlockPos"
#include "unmapped/ActorDefinitionIdentifier"


class Turtle : Animal {

public:
    Turtle::~Turtle()
    virtual void normalTick();
    virtual void getShadowRadius()const;
    virtual void die(ActorDamageSource const&);
    virtual void _getWalkTargetValue(BlockPos const&);

    Turtle(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
