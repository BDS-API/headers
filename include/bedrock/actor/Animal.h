#pragma once

#include "Mob.h"


class Animal : Mob {

public:
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    ~Animal();
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void _onSizeUpdated();
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void getAmbientSoundPostponeTicks();
    Animal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
