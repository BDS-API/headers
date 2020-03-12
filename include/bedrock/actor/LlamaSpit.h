#pragma once

#include "Actor.h"


class LlamaSpit : Actor {

public:
    ~LlamaSpit();
    virtual void normalTick();
    virtual void getPickRadius();
    virtual bool isPickable();
    virtual void getShadowHeightOffs();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void getBrightness(float)const;
    virtual void getSourceUniqueID()const;
    LlamaSpit(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
