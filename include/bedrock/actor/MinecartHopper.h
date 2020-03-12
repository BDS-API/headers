#pragma once

#include "Minecart.h"


class MinecartHopper : Minecart {

public:
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getType();
    virtual void getDefaultDisplayBlock()const;
    virtual void applyNaturalSlowdown();
    virtual void getDefaultDisplayOffset()const;
    ~MinecartHopper();
    MinecartHopper(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
