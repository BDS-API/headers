#pragma once

#include "HumanoidMonster.h"


class Pillager : HumanoidMonster {

public:
    virtual bool isDarkEnoughToSpawn()const;
    virtual void getItemUseDuration();
    virtual void getRidingHeight();
    virtual void _getWalkTargetValue(BlockPos const&);
    ~Pillager();
    virtual void normalTick();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    Pillager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
