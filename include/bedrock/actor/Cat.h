#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/RenderParams"


class Cat : Animal {

public:
    static long SNEAK_SPEED_MOD;
    static long SPRINT_SPEED_MOD;

    virtual Cat::~Cat();
    virtual void onTame(void);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void getAmbientSound(void);
    virtual void aiStep(void);
    virtual void _serverAiMobStep(void);

    Cat(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getLieDownAmount(float);
    void getLieDownAmountTail(float);
    void getLieOnPlayer(void);
    void updateLieDownAmount(void);
};
