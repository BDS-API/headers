#pragma once

#include "Minecart.h"


class MinecartRideable : Minecart {

public:
    virtual void getType();
    ~MinecartRideable();
    MinecartRideable(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
