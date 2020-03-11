#pragma once

#include "../util/BlockPos.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./HumanoidMonster.h"


class VindicationIllager : HumanoidMonster {

public:
    virtual ~VindicationIllager();
    virtual void getRidingHeight();
    virtual bool canExistInPeaceful()const;
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void useNewAi()const;

    VindicationIllager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
