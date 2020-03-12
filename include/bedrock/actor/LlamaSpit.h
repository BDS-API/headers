#pragma once

#include "../util/Vec2.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"


class LlamaSpit : Actor {

public:
    virtual void getShadowHeightOffs();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void normalTick();
    virtual void getBrightness(float)const;
    virtual void getPickRadius();
    virtual bool isPickable();
    ~LlamaSpit();
    virtual void getSourceUniqueID()const;
    LlamaSpit(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
