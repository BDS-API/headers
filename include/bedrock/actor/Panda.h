#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "Animal.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/DataLoadHelper.h"


class Panda : Animal {

public:
    virtual void getAmbientSound();
    virtual void _onSizeUpdated();
    ~Panda();
    virtual void normalTick();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void setTransitioningSitting(bool);
    void updateRollAmount();
    bool isSneezing()const;
    void getRollCounter()const;
    void getLieOnBackAmount(float)const;
    void getSitAmount(float)const;
    void getUnhappyCounter()const;
    void getSneezeCounter()const;
    Panda(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void updateLaying();
    void updateSitting();
    void getRollAmount(float)const;
};
