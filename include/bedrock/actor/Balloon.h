#pragma once

#include "Actor.h"


class Balloon : Actor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN7Balloon15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~Balloon(); // _ZN7BalloonD2Ev
    virtual void remove(); // _ZN7Balloon6removeEv
    virtual void lerpTo(Vec3 const&, Vec2 const&, int); // _ZN7Balloon6lerpToERK4Vec3RK4Vec2i
    virtual void normalTick(); // _ZN7Balloon10normalTickEv
    virtual bool isPickable(); // _ZN7Balloon10isPickableEv
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN7Balloon5_hurtERK17ActorDamageSourceibb
    Balloon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN7BalloonC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void _init(); // _ZN7Balloon5_initEv
    void remove(bool); // _ZN7Balloon6removeEb
};
