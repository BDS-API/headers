#pragma once

#include "Animal.h"


class Panda : Animal {

public:
    ~Panda(); // _ZN5PandaD2Ev
    virtual void normalTick(); // _ZN5Panda10normalTickEv
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN5Panda22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void _onSizeUpdated(); // _ZN5Panda14_onSizeUpdatedEv
    virtual void getAmbientSound(); // _ZN5Panda15getAmbientSoundEv
    virtual void setTransitioningSitting(bool); // _ZN5Panda23setTransitioningSittingEb
    Panda(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN5PandaC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void updateSitting(); // _ZN5Panda13updateSittingEv
    void getSitAmount(float)const; // _ZNK5Panda12getSitAmountEf
    void updateLaying(); // _ZN5Panda12updateLayingEv
    bool isSneezing()const; // _ZNK5Panda10isSneezingEv
    void updateRollAmount(); // _ZN5Panda16updateRollAmountEv
    void getLieOnBackAmount(float)const; // _ZNK5Panda18getLieOnBackAmountEf
    void getUnhappyCounter()const; // _ZNK5Panda17getUnhappyCounterEv
    void getSneezeCounter()const; // _ZNK5Panda16getSneezeCounterEv
    void getRollAmount(float)const; // _ZNK5Panda13getRollAmountEf
    void getRollCounter()const; // _ZNK5Panda14getRollCounterEv
};
