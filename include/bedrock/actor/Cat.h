#pragma once

#include "../../unmapped/RenderParams"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class Cat : Animal {

public:
    static long SNEAK_SPEED_MOD;
    static long SPRINT_SPEED_MOD;

    virtual Cat::~Cat()
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
