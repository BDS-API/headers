#pragma once

#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Minecart.h"


class MinecartTNT : Minecart {

public:
    static long DEFAULT_FUSE_LENGTH;

    virtual ~MinecartTNT();
    virtual void normalTick();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void causeFallDamage(float);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getType();
    virtual void getDefaultDisplayBlock()const;

    MinecartTNT(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
//  void primeFuse(ActorDamageCause); //TODO: incomplete function definition
    void getFuse();
};
