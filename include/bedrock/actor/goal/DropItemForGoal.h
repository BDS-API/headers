#pragma once

#include "../Actor"
#include "../../../unmapped/FloatRange"
#include "../Mob"
#include "../../definition/DefinitionTrigger"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class DropItemForGoal : BaseMoveToBlockGoal {

public:
    static long COOLDOWN_TICKS;

    DropItemForGoal::~DropItemForGoal()
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
