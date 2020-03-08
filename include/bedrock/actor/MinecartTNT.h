#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"


class MinecartTNT : Minecart {

public:
    static long DEFAULT_FUSE_LENGTH;

    virtual MinecartTNT::~MinecartTNT();
    virtual void normalTick(void);
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void causeFallDamage(float);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getType(void);
    virtual void getDefaultDisplayBlock(void)const;

    MinecartTNT(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void primeFuse(ActorDamageCause);
    void getFuse(void);
};
