#pragma once

#include "Actor.h"


class LlamaSpit : Actor {

public:
    ~LlamaSpit(); // _ZN9LlamaSpitD2Ev
    virtual void lerpTo(Vec3 const&, Vec2 const&, int); // _ZN9LlamaSpit6lerpToERK4Vec3RK4Vec2i
    virtual void normalTick(); // _ZN9LlamaSpit10normalTickEv
    virtual void getShadowHeightOffs(); // _ZN9LlamaSpit19getShadowHeightOffsEv
    virtual void getBrightness(float)const; // _ZNK9LlamaSpit13getBrightnessEf
    virtual bool isPickable(); // _ZN9LlamaSpit10isPickableEv
    virtual void getPickRadius(); // _ZN9LlamaSpit13getPickRadiusEv
    virtual void getSourceUniqueID()const; // _ZNK9LlamaSpit17getSourceUniqueIDEv
    LlamaSpit(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN9LlamaSpitC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
