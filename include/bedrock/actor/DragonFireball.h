#pragma once

#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class DragonFireball : Fireball {

public:
    static long SPLASH_RANGE;

    virtual DragonFireball::~DragonFireball()
    virtual bool isPickable();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getTrailParticle();
    virtual void shouldBurn();

    DragonFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
