#pragma once

#include "Monster.h"


class Creeper : Monster {

public:
    ~Creeper(); // _ZN7CreeperD2Ev
    virtual void normalTick(); // _ZN7Creeper10normalTickEv
    virtual void die(ActorDamageSource const&); // _ZN7Creeper3dieERK17ActorDamageSource
    virtual void _onSizeUpdated(); // _ZN7Creeper14_onSizeUpdatedEv
    virtual void useNewAi()const; // _ZNK7Creeper8useNewAiEv
    Creeper(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN7CreeperC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void _getSwell()const; // _ZNK7Creeper9_getSwellEv
    void _setOldSwell(int); // _ZN7Creeper12_setOldSwellEi
    void _setSwellDir(int); // _ZN7Creeper12_setSwellDirEi
    void getSwellDir(); // _ZN7Creeper11getSwellDirEv
    void _setSwell(int); // _ZN7Creeper9_setSwellEi
    void _getOldSwell()const; // _ZNK7Creeper12_getOldSwellEv
    void getSwelling(float)const; // _ZNK7Creeper11getSwellingEf
};
