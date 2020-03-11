#pragma once

#include "./Monster.h"
#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"


class Creeper : Monster {

public:
    virtual ~Creeper();
    virtual void normalTick();
    virtual void die(ActorDamageSource const&);
    virtual void _onSizeUpdated();
    virtual void useNewAi()const;

    Creeper(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _getSwell()const;
    void _setOldSwell(int);
    void _setSwellDir(int);
    void getSwellDir();
    void _setSwell(int);
    void _getOldSwell()const;
    void getSwelling(float)const;
};
