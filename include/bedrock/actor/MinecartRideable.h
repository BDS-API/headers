#pragma once

class MinecartRideable : Minecart {

public:
    virtual MinecartRideable::~MinecartRideable();
    virtual void getType(void);

    MinecartRideable(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
