#pragma once

#include "Minecart.h"


class MinecartHopper : Minecart {

public:
    ~MinecartHopper(); // _ZN14MinecartHopperD2Ev
    virtual void destroy(ActorDamageSource const&, bool); // _ZN14MinecartHopper7destroyERK17ActorDamageSourceb
    virtual void getType(); // _ZN14MinecartHopper7getTypeEv
    virtual void getDefaultDisplayBlock()const; // _ZNK14MinecartHopper22getDefaultDisplayBlockEv
    virtual void getDefaultDisplayOffset()const; // _ZNK14MinecartHopper23getDefaultDisplayOffsetEv
    virtual void applyNaturalSlowdown(); // _ZN14MinecartHopper20applyNaturalSlowdownEv
    MinecartHopper(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN14MinecartHopperC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
