#pragma once

#include "../../definition/DefinitionTrigger.h"
#include "../Actor.h"
#include "../../util/BlockPos.h"
#include "./BaseMoveToBlockGoal.h"
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include "../../../unmapped/FloatRange.h"
#include <string>


class DropItemForGoal : BaseMoveToBlockGoal {

public:
    static long COOLDOWN_TICKS;

    virtual ~DropItemForGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void findTargetBlock();

    DropItemForGoal(Mob &, float, int, int, float, DefinitionTrigger const&, float, float, float, std::string, FloatRange);
    void _getLootTable();
    void _checkWhereHaveYouBeenAchievement(Actor *);
    void getFilter();
};
