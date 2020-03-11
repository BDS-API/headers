#pragma once

#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../util/BlockPos.h"
#include "./HumanoidMonster.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"


class Pillager : HumanoidMonster {

public:
    virtual ~Pillager();
    virtual void normalTick();
    virtual void getRidingHeight();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void getItemUseDuration();
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual bool isDarkEnoughToSpawn()const;

    Pillager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
