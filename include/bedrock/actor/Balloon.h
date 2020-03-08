#pragma once

#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "../util/Vec3"
#include "unmapped/ActorDefinitionIdentifier"
#include "../util/Vec2"


class Balloon : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual Balloon::~Balloon()
    virtual void remove();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void normalTick();
    virtual bool isPickable();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);

    Balloon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _init();
    void remove(bool);
};
