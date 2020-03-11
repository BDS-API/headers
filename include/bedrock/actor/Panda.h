#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Animal.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"


class Panda : Animal {

public:
    virtual ~Panda();
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
