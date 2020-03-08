#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "../util/BlockPos"
#include "unmapped/ActorDefinitionIdentifier"


class Animal : Mob {

public:
    Animal::~Animal()
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _onSizeUpdated();
    virtual void getAmbientSoundPostponeTicks();
    virtual void _getWalkTargetValue(BlockPos const&);

    Animal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
