#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "../util/Vec2.h"
#include "./Actor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionGroup.h"


class LlamaSpit : Actor {

public:
    virtual ~LlamaSpit();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void normalTick();
    virtual void getShadowHeightOffs();
    virtual void getBrightness(float)const;
    virtual bool isPickable();
    virtual void getPickRadius();
    virtual void getSourceUniqueID()const;

    LlamaSpit(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
