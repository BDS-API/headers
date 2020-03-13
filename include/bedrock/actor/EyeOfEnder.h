#pragma once

#include "Actor.h"


class EyeOfEnder : Actor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN10EyeOfEnder15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~EyeOfEnder(); // _ZN10EyeOfEnderD2Ev
    virtual void lerpMotion(Vec3 const&); // _ZN10EyeOfEnder10lerpMotionERK4Vec3
    virtual void normalTick(); // _ZN10EyeOfEnder10normalTickEv
    virtual void getShadowRadius()const; // _ZNK10EyeOfEnder15getShadowRadiusEv
    EyeOfEnder(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN10EyeOfEnderC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void signalTo(Player const&, BlockPos &); // _ZN10EyeOfEnder8signalToERK6PlayerR8BlockPos
};
