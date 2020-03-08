#pragma once

#include "../../unmapped/RenderParams"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "unmapped/ActorDefinitionIdentifier"


class Chicken : Animal {

public:
    virtual Chicken::~Chicken()
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
