#pragma once

#include "Minecart.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"


class MinecartTNT : Minecart {

public:
    static long DEFAULT_FUSE_LENGTH;

    virtual void normalTick();
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getType();
    virtual void causeFallDamage(float);
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    ~MinecartTNT();
    virtual void getDefaultDisplayBlock()const;
//  void primeFuse(ActorDamageCause); //TODO: incomplete function definition
    void getFuse();
    MinecartTNT(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
