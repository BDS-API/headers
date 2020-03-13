#pragma once

#include "Minecart.h"


class MinecartRideable : Minecart {

public:
    ~MinecartRideable(); // _ZN16MinecartRideableD2Ev
    virtual void getType(); // _ZN16MinecartRideable7getTypeEv
    MinecartRideable(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN16MinecartRideableC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
