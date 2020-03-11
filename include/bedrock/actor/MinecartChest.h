#pragma once

#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Minecart.h"


class MinecartChest : Minecart {

public:
    static long ITEMS_SIZE;

    virtual ~MinecartChest();
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getType();
    virtual void getDefaultDisplayBlock()const;
    virtual void applyNaturalSlowdown();

    MinecartChest(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
