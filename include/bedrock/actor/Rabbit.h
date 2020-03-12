#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "../../unmapped/RenderParams.h"
#include "Animal.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/DataLoadHelper.h"


class Rabbit : Animal {

public:
    virtual void newServerAiStep();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void onSynchedDataUpdate(int);
    ~Rabbit();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    void eatCarrot();
    bool wantsMoreFood()const;
    void setRabbitType(int);
    void getJumpCompletion(float);
    void getRandomRabbitType();
    void readyToEat()const;
    Rabbit(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getRabbitType()const;
};
