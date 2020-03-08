#pragma once

#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class Panda : Animal {

public:
    virtual Panda::~Panda()
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
