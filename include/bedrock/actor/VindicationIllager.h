#pragma once

#include "unmapped/ActorDefinitionIdentifier"
#include "../util/BlockPos"
#include "unmapped/ActorDefinitionGroup"


class VindicationIllager : HumanoidMonster {

public:
    virtual VindicationIllager::~VindicationIllager()
    virtual void getRidingHeight();
    virtual bool canExistInPeaceful()const;
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void useNewAi()const;

    VindicationIllager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
