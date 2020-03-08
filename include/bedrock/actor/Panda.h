#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/DataLoadHelper"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class Panda : Animal {

public:
    Panda::~Panda()
    virtual void normalTick();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void _onSizeUpdated();
    virtual void getAmbientSound();
    virtual void setTransitioningSitting(bool);

    Panda(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void updateSitting();
    void getSitAmount(float)const;
    void updateLaying();
    bool isSneezing()const;
    void updateRollAmount();
    void getLieOnBackAmount(float)const;
    void getUnhappyCounter()const;
    void getSneezeCounter()const;
    void getRollAmount(float)const;
    void getRollCounter()const;
};
