#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../util/Vec3"
#include "unmapped/ActorDefinitionIdentifier"
#include "../util/Vec2"


class LlamaSpit : Actor {

public:
    virtual LlamaSpit::~LlamaSpit()
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void normalTick();
    virtual void getShadowHeightOffs();
    virtual void getBrightness(float)const;
    virtual bool isPickable();
    virtual void getPickRadius();
    virtual void getSourceUniqueID()const;

    LlamaSpit(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
