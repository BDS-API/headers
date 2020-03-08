#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/DataLoadHelper"
#include "../../unmapped/RenderParams"
#include "../util/BlockPos"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class Pillager : HumanoidMonster {

public:
    Pillager::~Pillager()
    virtual void normalTick();
    virtual void getRidingHeight();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void getItemUseDuration();
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual bool isDarkEnoughToSpawn()const;

    Pillager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
