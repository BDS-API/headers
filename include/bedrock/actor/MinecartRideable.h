#pragma once

#include "unmapped/ActorDefinitionIdentifier"
#include "unmapped/ActorDefinitionGroup"


class MinecartRideable : Minecart {

public:
    virtual MinecartRideable::~MinecartRideable()
    virtual void getType();

    MinecartRideable(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
