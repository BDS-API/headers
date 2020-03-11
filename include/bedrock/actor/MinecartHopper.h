#pragma once

#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Minecart.h"


class MinecartHopper : Minecart {

public:
    virtual ~MinecartHopper();
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getType();
    virtual void getDefaultDisplayBlock()const;
    virtual void getDefaultDisplayOffset()const;
    virtual void applyNaturalSlowdown();

    MinecartHopper(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
