#pragma once

#include "Minecart.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "unmapped/ActorDefinitionGroup.h"


class MinecartRideable : Minecart {

public:
    virtual void getType();
    ~MinecartRideable();
    MinecartRideable(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
