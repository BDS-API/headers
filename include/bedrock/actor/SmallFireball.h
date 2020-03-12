#pragma once

#include "Fireball.h"


class SmallFireball : Fireball {

public:
    ~SmallFireball();
    virtual bool isPickable();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    SmallFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
