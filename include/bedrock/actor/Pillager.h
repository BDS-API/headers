#pragma once

#include "HumanoidMonster.h"


class Pillager : HumanoidMonster {

public:
    ~Pillager(); // _ZN8PillagerD2Ev
    virtual void normalTick(); // _ZN8Pillager10normalTickEv
    virtual void getRidingHeight(); // _ZN8Pillager15getRidingHeightEv
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN8Pillager35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN8Pillager22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void getItemUseDuration(); // _ZN8Pillager18getItemUseDurationEv
    virtual void _getWalkTargetValue(BlockPos const&); // _ZN8Pillager19_getWalkTargetValueERK8BlockPos
    virtual bool isDarkEnoughToSpawn()const; // _ZNK8Pillager19isDarkEnoughToSpawnEv
    Pillager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN8PillagerC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
