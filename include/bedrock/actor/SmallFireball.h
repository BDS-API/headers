#pragma once

#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Fireball.h"


class SmallFireball : Fireball {

public:
    virtual ~SmallFireball();
    virtual bool isPickable();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);

    SmallFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
