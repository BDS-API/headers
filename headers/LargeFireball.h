#pragma once

class LargeFireball : Fireball {

public:
    virtual ~LargeFireball();

    void LargeFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setExplosionPower(int);
};
