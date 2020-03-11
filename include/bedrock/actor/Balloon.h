#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "../util/Vec2.h"
#include "./Actor.h"
#include "../../unmapped/VariantParameterList.h"
#include "damagesource/ActorDamageSource.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionGroup.h"


class Balloon : Actor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~Balloon();
    virtual void remove();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void normalTick();
    virtual bool isPickable();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);

    Balloon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _init();
    void remove(bool);
};
