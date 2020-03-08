#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionIdentifier"


class MinecartChest : Minecart {

public:
    static long ITEMS_SIZE;

    MinecartChest::~MinecartChest()
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getType();
    virtual void getDefaultDisplayBlock()const;
    virtual void applyNaturalSlowdown();

    MinecartChest(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
