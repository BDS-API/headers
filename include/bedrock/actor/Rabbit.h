#pragma once

#include "Animal.h"


class Rabbit : Animal {

public:
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void onSynchedDataUpdate(int);
    virtual void addAdditionalSaveData(CompoundTag &);
    ~Rabbit();
    virtual void newServerAiStep();
    Rabbit(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void eatCarrot();
    void setRabbitType(int);
    void getRandomRabbitType();
    void readyToEat()const;
    bool wantsMoreFood()const;
    void getJumpCompletion(float);
    void getRabbitType()const;
};
