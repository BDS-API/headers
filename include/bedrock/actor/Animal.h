#pragma once

#include "Mob.h"


class Animal : Mob {

public:
    ~Animal(); // _ZN6AnimalD2Ev
    virtual bool isInvulnerableTo(ActorDamageSource const&)const; // _ZNK6Animal16isInvulnerableToERK17ActorDamageSource
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN6Animal5_hurtERK17ActorDamageSourceibb
    virtual void _onSizeUpdated(); // _ZN6Animal14_onSizeUpdatedEv
    virtual void getAmbientSoundPostponeTicks(); // _ZN6Animal28getAmbientSoundPostponeTicksEv
    virtual void _getWalkTargetValue(BlockPos const&); // _ZN6Animal19_getWalkTargetValueERK8BlockPos
    Animal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN6AnimalC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
