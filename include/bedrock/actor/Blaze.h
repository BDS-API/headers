#pragma once

#include "Monster.h"


class Blaze : Monster {

public:
    virtual void getBrightness(float)const;
    virtual void travel(float, float, float);
    virtual bool isDarkEnoughToSpawn()const;
    virtual bool isOnFire()const;
    ~Blaze();
    virtual void useNewAi()const;
    virtual void normalTick();
    virtual void aiStep();
    Blaze(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
