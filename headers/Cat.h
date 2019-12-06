#pragma once

class Cat : Animal {

public:
    static long Cat::SNEAK_SPEED_MOD;
    static long Cat::SPRINT_SPEED_MOD;

    virtual ~Cat();
    virtual void onTame(void);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void getAmbientSound(void);
    virtual void aiStep(void);
    virtual void _serverAiMobStep(void);

    void Cat(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getLieDownAmount(float);
    void getLieDownAmountTail(float);
    void getLieOnPlayer(void);
    void updateLieDownAmount(void);
};
