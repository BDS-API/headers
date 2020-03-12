#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "Animal.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "damagesource/ActorDamageSource.h"


class Turtle : Animal {

public:
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void die(ActorDamageSource const&);
    ~Turtle();
    virtual void normalTick();
    virtual void getShadowRadius()const;
    Turtle(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
