#pragma once

class LargeFireball : Fireball {

public:
    virtual LargeFireball::~LargeFireball();

    LargeFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setExplosionPower(int);
};
