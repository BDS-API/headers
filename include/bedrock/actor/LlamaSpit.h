#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/Vec3"


class LlamaSpit : Actor {

public:
    virtual LlamaSpit::~LlamaSpit();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void normalTick(void);
    virtual void getShadowHeightOffs(void);
    virtual void getBrightness(float)const;
    virtual bool isPickable(void);
    virtual void getPickRadius(void);
    virtual void getSourceUniqueID(void)const;

    LlamaSpit(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
