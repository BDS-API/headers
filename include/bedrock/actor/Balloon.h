#pragma once

#include "../util/Vec2.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "damagesource/ActorDamageSource.h"


class Balloon : Actor {

public:
    virtual void remove();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void normalTick();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual bool isPickable();
    ~Balloon();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    void remove(bool);
    Balloon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _init();
};
