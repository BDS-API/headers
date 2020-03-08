#pragma once

#include "../../unmapped/BlockPos"
#include "../../unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"


class Turtle : Animal {

public:
    virtual Turtle::~Turtle();
    virtual void normalTick(void);
    virtual void getShadowRadius(void)const;
    virtual void die(ActorDamageSource const&);
    virtual void _getWalkTargetValue(BlockPos const&);

    Turtle(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
