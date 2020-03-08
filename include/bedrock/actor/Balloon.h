#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "../util/Vec2"
#include "../util/Vec3"
#include "unmapped/ActorDefinitionIdentifier"


class Balloon : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    Balloon::~Balloon()
    virtual void remove();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void normalTick();
    virtual bool isPickable();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);

    Balloon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _init();
    void remove(bool);
};
