#pragma once

#include "Minecart.h"


class MinecartChest : public Minecart {

public:
    static long ITEMS_SIZE;

    virtual ~MinecartChest(); // _ZN13MinecartChestD2Ev
    virtual void __fake_function0(); // fake
    virtual void destroy(ActorDamageSource const&, bool); // _ZN13MinecartChest7destroyERK17ActorDamageSourceb
    virtual void getType(); // _ZN13MinecartChest7getTypeEv
    virtual void getDefaultDisplayBlock()const; // _ZNK13MinecartChest22getDefaultDisplayBlockEv
    virtual void applyNaturalSlowdown(); // _ZN13MinecartChest20applyNaturalSlowdownEv
    MinecartChest(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN13MinecartChestC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
