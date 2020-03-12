#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Fireball.h"


class LargeFireball : Fireball {

public:
    ~LargeFireball();
    LargeFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setExplosionPower(int);
};
