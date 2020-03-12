#pragma once

#include "Minecart.h"


class MinecartChest : Minecart {

public:
    static long ITEMS_SIZE;

    virtual void getDefaultDisplayBlock()const;
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getType();
    ~MinecartChest();
    virtual void applyNaturalSlowdown();
    MinecartChest(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
