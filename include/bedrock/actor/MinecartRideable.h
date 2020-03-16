#pragma once

#include "Minecart.h"


class MinecartRideable : public Minecart {

public:
    virtual ~MinecartRideable(); // _ZN16MinecartRideableD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType(); // _ZN16MinecartRideable7getTypeEv
    MinecartRideable(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN16MinecartRideableC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
