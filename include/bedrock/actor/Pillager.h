#pragma once

#include "../../unmapped/RenderParams"
#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "../util/BlockPos"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class Pillager : HumanoidMonster {

public:
    virtual Pillager::~Pillager()
    virtual void normalTick();
    virtual void getRidingHeight();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void getItemUseDuration();
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual bool isDarkEnoughToSpawn()const;

    Pillager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
