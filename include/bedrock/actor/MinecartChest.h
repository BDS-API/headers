#pragma once

#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class MinecartChest : Minecart {

public:
    static long ITEMS_SIZE;

    virtual MinecartChest::~MinecartChest()
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getType();
    virtual void getDefaultDisplayBlock()const;
    virtual void applyNaturalSlowdown();

    MinecartChest(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
