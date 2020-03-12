#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Fireball.h"


class DragonFireball : Fireball {

public:
    static long SPLASH_RANGE;

    virtual bool isPickable();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void shouldBurn();
    ~DragonFireball();
    virtual void getTrailParticle();
    DragonFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
