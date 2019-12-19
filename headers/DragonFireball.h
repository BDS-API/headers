#pragma once

class DragonFireball : Fireball {

public:
    static long SPLASH_RANGE;

    virtual ~DragonFireball();
    virtual bool isPickable(void);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getTrailParticle(void);
    virtual void shouldBurn(void);

    void DragonFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
