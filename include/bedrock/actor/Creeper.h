#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionIdentifier"


class Creeper : Monster {

public:
    Creeper::~Creeper()
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
