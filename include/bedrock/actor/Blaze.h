#pragma once

#include "Monster.h"


class Blaze : Monster {

public:
    ~Blaze(); // _ZN5BlazeD2Ev
    virtual void normalTick(); // _ZN5Blaze10normalTickEv
    virtual void getBrightness(float)const; // _ZNK5Blaze13getBrightnessEf
    virtual bool isOnFire()const; // _ZNK5Blaze8isOnFireEv
    virtual void travel(float, float, float); // _ZN5Blaze6travelEfff
    virtual void aiStep(); // _ZN5Blaze6aiStepEv
    virtual void useNewAi()const; // _ZNK5Blaze8useNewAiEv
    virtual bool isDarkEnoughToSpawn()const; // _ZNK5Blaze19isDarkEnoughToSpawnEv
    Blaze(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN5BlazeC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
