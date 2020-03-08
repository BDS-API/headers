#pragma once

#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class Creeper : Monster {

public:
    virtual Creeper::~Creeper()
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
