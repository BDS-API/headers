#pragma once

#include "Minecart.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"


class MinecartHopper : Minecart {

public:
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getDefaultDisplayBlock()const;
    ~MinecartHopper();
    virtual void applyNaturalSlowdown();
    virtual void getDefaultDisplayOffset()const;
    virtual void getType();
    MinecartHopper(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
