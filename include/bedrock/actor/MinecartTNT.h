#pragma once

#include "Minecart.h"


class MinecartTNT : public Minecart {

public:
    static long DEFAULT_FUSE_LENGTH;

    virtual ~MinecartTNT(); // _ZN11MinecartTNTD2Ev
    virtual void __fake_function0(); // fake
    virtual void normalTick(); // _ZN11MinecartTNT10normalTickEv
    virtual void handleEntityEvent__incomplete0(long, int); //TODO: incomplete function definition // _ZN11MinecartTNT17handleEntityEventE10ActorEventi
    virtual void causeFallDamage(float); // _ZN11MinecartTNT15causeFallDamageEf
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN11MinecartTNT5_hurtERK17ActorDamageSourceibb
    virtual void destroy(ActorDamageSource const&, bool); // _ZN11MinecartTNT7destroyERK17ActorDamageSourceb
    virtual void getType(); // _ZN11MinecartTNT7getTypeEv
    virtual void getDefaultDisplayBlock()const; // _ZNK11MinecartTNT22getDefaultDisplayBlockEv
    MinecartTNT(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN11MinecartTNTC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
//    void primeFuse(long); //TODO: incomplete function definition // _ZN11MinecartTNT9primeFuseE16ActorDamageCause
    void getFuse(); // _ZN11MinecartTNT7getFuseEv
};
