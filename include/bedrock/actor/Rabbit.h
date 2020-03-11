#pragma once

#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Animal.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"


class Rabbit : Animal {

public:
    virtual ~Rabbit();
    virtual void onSynchedDataUpdate(int);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void newServerAiStep();

    Rabbit(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getRandomRabbitType();
    void getJumpCompletion(float);
    void getRabbitType()const;
    void setRabbitType(int);
    void readyToEat()const;
    bool wantsMoreFood()const;
    void eatCarrot();
};
