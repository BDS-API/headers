#pragma once

#include "Minecart.h"


class MinecartTNT : Minecart {

public:
    static long DEFAULT_FUSE_LENGTH;

    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    ~MinecartTNT();
    virtual void getType();
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void causeFallDamage(float);
    virtual void getDefaultDisplayBlock()const;
    virtual void normalTick();
//  void primeFuse(ActorDamageCause); //TODO: incomplete function definition
    void getFuse();
    MinecartTNT(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
