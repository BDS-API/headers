#pragma once

#include "../../unmapped/RenderParams"
#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class Rabbit : Animal {

public:
    virtual Rabbit::~Rabbit()
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
