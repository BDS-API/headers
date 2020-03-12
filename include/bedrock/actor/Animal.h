#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "Mob.h"
#include "damagesource/ActorDamageSource.h"


class Animal : Mob {

public:
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    ~Animal();
    virtual void _onSizeUpdated();
    virtual void getAmbientSoundPostponeTicks();
    virtual void _getWalkTargetValue(BlockPos const&);
    Animal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
