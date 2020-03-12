#pragma once

#include "Fireball.h"


class LargeFireball : Fireball {

public:
    ~LargeFireball();
    LargeFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setExplosionPower(int);
};
