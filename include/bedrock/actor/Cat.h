#pragma once

#include "Animal.h"


class Cat : Animal {

public:
    static long SNEAK_SPEED_MOD;
    static long SPRINT_SPEED_MOD;

    ~Cat(); // _ZN3CatD2Ev
    virtual void onTame(); // _ZN3Cat6onTameEv
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN3Cat35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void getAmbientSound(); // _ZN3Cat15getAmbientSoundEv
    virtual void aiStep(); // _ZN3Cat6aiStepEv
    virtual void _serverAiMobStep(); // _ZN3Cat16_serverAiMobStepEv
    Cat(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN3CatC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void getLieDownAmount(float); // _ZN3Cat16getLieDownAmountEf
    void getLieDownAmountTail(float); // _ZN3Cat20getLieDownAmountTailEf
    void getLieOnPlayer(); // _ZN3Cat14getLieOnPlayerEv
    void updateLieDownAmount(); // _ZN3Cat19updateLieDownAmountEv
};
