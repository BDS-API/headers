#pragma once

#include "Animal.h"


class Panda : Animal {

public:
    virtual void _onSizeUpdated();
    virtual void setTransitioningSitting(bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    ~Panda();
    virtual void getAmbientSound();
    virtual void normalTick();
    void updateLaying();
    void getRollCounter()const;
    void getRollAmount(float)const;
    void getSitAmount(float)const;
    void updateSitting();
    void updateRollAmount();
    bool isSneezing()const;
    void getLieOnBackAmount(float)const;
    void getUnhappyCounter()const;
    Panda(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getSneezeCounter()const;
};
