#pragma once

#include "../Mob"
#include "../../../unmapped/BlockSource"
#include "../Actor"


class DropItemForGoal : BaseMoveToBlockGoal {

public:
    static long COOLDOWN_TICKS;

    virtual DropItemForGoal::~DropItemForGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void findTargetBlock(void);

    DropItemForGoal(Mob &, float, int, int, float, DefinitionTrigger const&, float, float, float, std::string, FloatRange);
    void _getLootTable(void);
    void _checkWhereHaveYouBeenAchievement(Actor *);
    void getFilter(void);
};
