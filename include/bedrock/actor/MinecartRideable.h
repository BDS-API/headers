#pragma once

#include "unmapped/ActorDefinitionIdentifier"
#include "unmapped/ActorDefinitionGroup"


class MinecartRideable : Minecart {

public:
    MinecartRideable::~MinecartRideable()
    virtual void getType();

    MinecartRideable(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
