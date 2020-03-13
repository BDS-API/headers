#pragma once

#include "Animal.h"


class Turtle : Animal {

public:
    ~Turtle(); // _ZN6TurtleD2Ev
    virtual void normalTick(); // _ZN6Turtle10normalTickEv
    virtual void getShadowRadius()const; // _ZNK6Turtle15getShadowRadiusEv
    virtual void die(ActorDamageSource const&); // _ZN6Turtle3dieERK17ActorDamageSource
    virtual void _getWalkTargetValue(BlockPos const&); // _ZN6Turtle19_getWalkTargetValueERK8BlockPos
    Turtle(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN6TurtleC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
