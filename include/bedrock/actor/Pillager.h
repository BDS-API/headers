#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "../../unmapped/RenderParams.h"
#include "HumanoidMonster.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/DataLoadHelper.h"


class Pillager : HumanoidMonster {

public:
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual bool isDarkEnoughToSpawn()const;
    virtual void normalTick();
    virtual void getItemUseDuration();
    virtual void getRidingHeight();
    ~Pillager();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _getWalkTargetValue(BlockPos const&);
    Pillager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
