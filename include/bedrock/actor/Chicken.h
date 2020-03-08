#pragma once

#include "../../unmapped/BlockPos"
#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/RenderParams"


class Chicken : Animal {

public:
    virtual Chicken::~Chicken();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void aiStep(void);
    virtual void useNewAi(void)const;

    Chicken(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getFlap(void)const;
    void getOFlap(void)const;
    void getFlapSpeed(void)const;
    void getOFlapSpeed(void)const;
};
