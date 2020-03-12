#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"
#include "../../../unmapped/FloatRange.h"


class DropItemForGoal : BaseMoveToBlockGoal {

public:
    static long COOLDOWN_TICKS;

    virtual void findTargetBlock();
    virtual void start();
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void tick();
    ~DropItemForGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void stop();
    DropItemForGoal(Mob &, float, int, int, float, DefinitionTrigger const&, float, float, float, std::string, FloatRange);
    void _checkWhereHaveYouBeenAchievement(Actor *);
    void _getLootTable();
    void getFilter();
};
