#pragma once

#include "Animal.h"


class Cat : Animal {

public:
    static long SNEAK_SPEED_MOD;
    static long SPRINT_SPEED_MOD;

    virtual void getAmbientSound();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    ~Cat();
    virtual void _serverAiMobStep();
    virtual void onTame();
    virtual void aiStep();
    void getLieDownAmountTail(float);
    Cat(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getLieOnPlayer();
    void updateLieDownAmount();
    void getLieDownAmount(float);
};
