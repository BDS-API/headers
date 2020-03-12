#pragma once

#include "Animal.h"


class Chicken : Animal {

public:
    virtual void useNewAi()const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    ~Chicken();
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void aiStep();
    void getFlapSpeed()const;
    Chicken(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getOFlap()const;
    void getOFlapSpeed()const;
    void getFlap()const;
};
