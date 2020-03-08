#pragma once

#include "../Mob"
#include "../../block/unmapped/BlockSource"
#include "../../definition/DefinitionTrigger"
#include "../Actor"
#include "../../util/BlockPos"
#include "../../../unmapped/FloatRange"


class DropItemForGoal : BaseMoveToBlockGoal {

public:
    static long COOLDOWN_TICKS;

    virtual DropItemForGoal::~DropItemForGoal()
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
