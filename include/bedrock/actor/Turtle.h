#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Animal.h"
#include "../util/BlockPos.h"
#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"


class Turtle : Animal {

public:
    virtual ~Turtle();
    virtual void normalTick();
    virtual void getShadowRadius()const;
    virtual void die(ActorDamageSource const&);
    virtual void _getWalkTargetValue(BlockPos const&);

    Turtle(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
