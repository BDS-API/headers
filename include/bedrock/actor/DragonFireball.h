#pragma once

#include "Fireball.h"


class DragonFireball : public Fireball {

public:
    static long SPLASH_RANGE;

    virtual ~DragonFireball(); // _ZN14DragonFireballD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isPickable(); // _ZN14DragonFireball10isPickableEv
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN14DragonFireball5_hurtERK17ActorDamageSourceibb
    virtual void getTrailParticle(); // _ZN14DragonFireball16getTrailParticleEv
    virtual bool shouldBurn(); // _ZN14DragonFireball10shouldBurnEv
    DragonFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN14DragonFireballC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
