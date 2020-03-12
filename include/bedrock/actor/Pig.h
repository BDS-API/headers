#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "Animal.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/Block.h"
#include "damagesource/ActorDamageSource.h"


class Pig : Animal {

public:
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    ~Pig();
    virtual void normalTick();
    virtual void useNewAi()const;
    Pig(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
