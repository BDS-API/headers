#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Minecart.h"


class MinecartRideable : Minecart {

public:
    virtual ~MinecartRideable();
    virtual void getType();

    MinecartRideable(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
