#pragma once

#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "unmapped/ActorDefinitionIdentifier"


class Pig : Animal {

public:
    virtual Pig::~Pig()
    virtual void normalTick();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void useNewAi()const;

    Pig(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
