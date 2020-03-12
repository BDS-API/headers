#pragma once

#include "Animal.h"


class Turtle : Animal {

public:
    virtual void die(ActorDamageSource const&);
    virtual void _getWalkTargetValue(BlockPos const&);
    ~Turtle();
    virtual void normalTick();
    virtual void getShadowRadius()const;
    Turtle(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
