#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Mob.h"
#include "../util/BlockPos.h"
#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"


class Animal : Mob {

public:
    virtual ~Animal();
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _onSizeUpdated();
    virtual void getAmbientSoundPostponeTicks();
    virtual void _getWalkTargetValue(BlockPos const&);

    Animal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
