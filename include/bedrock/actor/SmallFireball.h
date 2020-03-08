#pragma once

#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class SmallFireball : Fireball {

public:
    virtual SmallFireball::~SmallFireball()
    virtual bool isPickable();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);

    SmallFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
