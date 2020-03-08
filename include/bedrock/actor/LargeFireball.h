#pragma once

#include "unmapped/ActorDefinitionIdentifier"
#include "unmapped/ActorDefinitionGroup"


class LargeFireball : Fireball {

public:
    virtual LargeFireball::~LargeFireball()

    LargeFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setExplosionPower(int);
};
