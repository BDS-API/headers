#pragma once

#include <string>
#include "../Actor.h"
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include "BaseMoveToBlockGoal.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/FloatRange.h"
#include "../../definition/DefinitionTrigger.h"


class DropItemForGoal : BaseMoveToBlockGoal {

public:
    static long COOLDOWN_TICKS;

    virtual void start();
    virtual void tick();
    ~DropItemForGoal();
    virtual void findTargetBlock();
    virtual bool canUse();
    virtual void stop();
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    void getFilter();
    void _getLootTable();
    void _checkWhereHaveYouBeenAchievement(Actor *);
    DropItemForGoal(Mob &, float, int, int, float, DefinitionTrigger const&, float, float, float, std::string, FloatRange);
};
