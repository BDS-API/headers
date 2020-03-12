#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Fireball.h"


class SmallFireball : Fireball {

public:
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual bool isPickable();
    ~SmallFireball();
    SmallFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
