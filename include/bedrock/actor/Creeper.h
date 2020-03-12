#pragma once

#include "Monster.h"


class Creeper : Monster {

public:
    virtual void die(ActorDamageSource const&);
    virtual void useNewAi()const;
    virtual void _onSizeUpdated();
    virtual void normalTick();
    ~Creeper();
    void _getSwell()const;
    void _getOldSwell()const;
    void _setSwell(int);
    void _setSwellDir(int);
    void getSwellDir();
    void getSwelling(float)const;
    void _setOldSwell(int);
    Creeper(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
