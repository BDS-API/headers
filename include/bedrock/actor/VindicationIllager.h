#pragma once

#include "HumanoidMonster.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"


class VindicationIllager : HumanoidMonster {

public:
    virtual void getRidingHeight();
    virtual void useNewAi()const;
    ~VindicationIllager();
    virtual bool canExistInPeaceful()const;
    virtual void _getWalkTargetValue(BlockPos const&);
    VindicationIllager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
