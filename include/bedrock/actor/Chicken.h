#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "../../unmapped/RenderParams.h"
#include "Animal.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/Block.h"


class Chicken : Animal {

public:
    virtual void _playStepSound(BlockPos const&, Block const&);
    ~Chicken();
    virtual void useNewAi()const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void aiStep();
    Chicken(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getOFlapSpeed()const;
    void getFlap()const;
    void getOFlap()const;
    void getFlapSpeed()const;
};
