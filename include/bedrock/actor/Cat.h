#pragma once

#include "Animal.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionGroup.h"


class Cat : Animal {

public:
    static long SNEAK_SPEED_MOD;
    static long SPRINT_SPEED_MOD;

    virtual void getAmbientSound();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void onTame();
    ~Cat();
    virtual void _serverAiMobStep();
    virtual void aiStep();
    void updateLieDownAmount();
    void getLieDownAmount(float);
    Cat(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getLieOnPlayer();
    void getLieDownAmountTail(float);
};
