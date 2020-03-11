#pragma once

#include "./Monster.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"


class Blaze : Monster {

public:
    virtual ~Blaze();
    virtual void normalTick();
    virtual void getBrightness(float)const;
    virtual bool isOnFire()const;
    virtual void travel(float, float, float);
    virtual void aiStep();
    virtual void useNewAi()const;
    virtual bool isDarkEnoughToSpawn()const;

    Blaze(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
