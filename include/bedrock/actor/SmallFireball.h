#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionIdentifier"


class SmallFireball : Fireball {

public:
    SmallFireball::~SmallFireball()
    virtual bool isPickable();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);

    SmallFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
