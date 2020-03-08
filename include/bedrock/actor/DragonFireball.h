#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionIdentifier"


class DragonFireball : Fireball {

public:
    static long SPLASH_RANGE;

    DragonFireball::~DragonFireball()
    virtual bool isPickable();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getTrailParticle();
    virtual void shouldBurn();

    DragonFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
