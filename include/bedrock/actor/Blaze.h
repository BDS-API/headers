#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Monster.h"


class Blaze : Monster {

public:
    virtual void useNewAi()const;
    virtual bool isOnFire()const;
    ~Blaze();
    virtual bool isDarkEnoughToSpawn()const;
    virtual void travel(float, float, float);
    virtual void normalTick();
    virtual void getBrightness(float)const;
    virtual void aiStep();
    Blaze(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
