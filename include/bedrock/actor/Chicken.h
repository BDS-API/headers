#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/RenderParams"
#include "../util/BlockPos"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/Block"


class Chicken : Animal {

public:
    Chicken::~Chicken()
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void aiStep();
    virtual void useNewAi()const;

    Chicken(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getFlap()const;
    void getOFlap()const;
    void getFlapSpeed()const;
    void getOFlapSpeed()const;
};
