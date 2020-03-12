#pragma once

#include "Minecart.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"


class MinecartChest : Minecart {

public:
    static long ITEMS_SIZE;

    ~MinecartChest();
    virtual void applyNaturalSlowdown();
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getDefaultDisplayBlock()const;
    virtual void getType();
    MinecartChest(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
