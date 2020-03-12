#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Monster.h"


class Creeper : Monster {

public:
    virtual void _onSizeUpdated();
    virtual void normalTick();
    virtual void die(ActorDamageSource const&);
    virtual void useNewAi()const;
    ~Creeper();
    void _setOldSwell(int);
    void getSwelling(float)const;
    void _getOldSwell()const;
    void getSwellDir();
    void _getSwell()const;
    void _setSwell(int);
    void _setSwellDir(int);
    Creeper(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
