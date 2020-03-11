#pragma once

#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Animal.h"


class Cat : Animal {

public:
    static long SNEAK_SPEED_MOD;
    static long SPRINT_SPEED_MOD;

    virtual ~Cat();
    virtual void onTame();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void getAmbientSound();
    virtual void aiStep();
    virtual void _serverAiMobStep();

    Cat(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getLieDownAmount(float);
    void getLieDownAmountTail(float);
    void getLieOnPlayer();
    void updateLieDownAmount();
};
