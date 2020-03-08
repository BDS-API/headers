#pragma once

#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class MinecartTNT : Minecart {

public:
    static long DEFAULT_FUSE_LENGTH;

    virtual MinecartTNT::~MinecartTNT()
    virtual void normalTick();
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void causeFallDamage(float);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getType();
    virtual void getDefaultDisplayBlock()const;

    MinecartTNT(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void primeFuse(ActorDamageCause);
    void getFuse();
};
