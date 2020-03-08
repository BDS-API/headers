#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionIdentifier"


class MinecartHopper : Minecart {

public:
    MinecartHopper::~MinecartHopper()
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getType();
    virtual void getDefaultDisplayBlock()const;
    virtual void getDefaultDisplayOffset()const;
    virtual void applyNaturalSlowdown();

    MinecartHopper(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
