#pragma once

#include "HumanoidMonster.h"


class VindicationIllager : HumanoidMonster {

public:
    ~VindicationIllager(); // _ZN18VindicationIllagerD2Ev
    virtual void getRidingHeight(); // _ZN18VindicationIllager15getRidingHeightEv
    virtual bool canExistInPeaceful()const; // _ZNK18VindicationIllager18canExistInPeacefulEv
    virtual void _getWalkTargetValue(BlockPos const&); // _ZN18VindicationIllager19_getWalkTargetValueERK8BlockPos
    virtual void useNewAi()const; // _ZNK18VindicationIllager8useNewAiEv
    VindicationIllager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN18VindicationIllagerC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
