#pragma once

#include "Actor.h"


class Balloon : Actor {

public:
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void normalTick();
    ~Balloon();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void remove();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual bool isPickable();
    void _init();
    Balloon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void remove(bool);
};
