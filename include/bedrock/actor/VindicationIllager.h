#pragma once

#include "HumanoidMonster.h"


class VindicationIllager : HumanoidMonster {

public:
    virtual void useNewAi()const;
    virtual void getRidingHeight();
    virtual bool canExistInPeaceful()const;
    ~VindicationIllager();
    virtual void _getWalkTargetValue(BlockPos const&);
    VindicationIllager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
