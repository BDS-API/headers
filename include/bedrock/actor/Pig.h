#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Animal.h"
#include "../util/BlockPos.h"
#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../../unmapped/Block.h"


class Pig : Animal {

public:
    virtual ~Pig();
    virtual void normalTick();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void useNewAi()const;

    Pig(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
