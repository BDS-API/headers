#pragma once

#include "Fireball.h"


class DragonFireball : Fireball {

public:
    static long SPLASH_RANGE;

    virtual void shouldBurn();
    virtual void getTrailParticle();
    virtual bool isPickable();
    ~DragonFireball();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    DragonFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
