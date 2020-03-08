#pragma once

#include "../../unmapped/BlockPos"
#include "../../unmapped/ActorDefinitionGroup"


class VindicationIllager : HumanoidMonster {

public:
    virtual VindicationIllager::~VindicationIllager();
    virtual void getRidingHeight(void);
    virtual bool canExistInPeaceful(void)const;
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void useNewAi(void)const;

    VindicationIllager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
