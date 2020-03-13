#pragma once

#include "Animal.h"


class Rabbit : Animal {

public:
    ~Rabbit(); // _ZN6RabbitD2Ev
    virtual void onSynchedDataUpdate(int); // _ZN6Rabbit19onSynchedDataUpdateEi
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN6Rabbit35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN6Rabbit22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN6Rabbit21addAdditionalSaveDataER11CompoundTag
    virtual void newServerAiStep(); // _ZN6Rabbit15newServerAiStepEv
    Rabbit(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN6RabbitC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void getRandomRabbitType(); // _ZN6Rabbit19getRandomRabbitTypeEv
    void getJumpCompletion(float); // _ZN6Rabbit17getJumpCompletionEf
    void getRabbitType()const; // _ZNK6Rabbit13getRabbitTypeEv
    void setRabbitType(int); // _ZN6Rabbit13setRabbitTypeEi
    void readyToEat()const; // _ZNK6Rabbit10readyToEatEv
    bool wantsMoreFood()const; // _ZNK6Rabbit13wantsMoreFoodEv
    void eatCarrot(); // _ZN6Rabbit9eatCarrotEv
};
