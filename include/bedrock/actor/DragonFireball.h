#pragma once

#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Fireball.h"


class DragonFireball : Fireball {

public:
    static long SPLASH_RANGE;

    virtual ~DragonFireball();
    virtual bool isPickable();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getTrailParticle();
    virtual void shouldBurn();

    DragonFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
