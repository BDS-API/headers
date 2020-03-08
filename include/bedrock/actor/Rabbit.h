#pragma once

#include "../../unmapped/RenderParams"
#include "../../unmapped/ActorDefinitionGroup"
#include "../nbt/CompoundTag"


class Rabbit : Animal {

public:
    virtual Rabbit::~Rabbit();
    virtual void onSynchedDataUpdate(int);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void newServerAiStep(void);

    Rabbit(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getRandomRabbitType(void);
    void getJumpCompletion(float);
    void getRabbitType(void)const;
    void setRabbitType(int);
    void readyToEat(void)const;
    bool wantsMoreFood(void)const;
    void eatCarrot(void);
};
