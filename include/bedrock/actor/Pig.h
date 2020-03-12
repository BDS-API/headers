#pragma once

#include "Animal.h"


class Pig : Animal {

public:
    ~Pig();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void normalTick();
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void useNewAi()const;
    Pig(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
