#pragma once

#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class MinecartHopper : Minecart {

public:
    virtual MinecartHopper::~MinecartHopper()
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getType();
    virtual void getDefaultDisplayBlock()const;
    virtual void getDefaultDisplayOffset()const;
    virtual void applyNaturalSlowdown();

    MinecartHopper(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
