#pragma once

class MinecartRideable : Minecart {

public:
    virtual ~MinecartRideable();
    virtual void getType(void);

    void MinecartRideable(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
