#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "../util/BlockPos"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/Block"


class Pig : Animal {

public:
    Pig::~Pig()
    virtual void normalTick();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void useNewAi()const;

    Pig(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
