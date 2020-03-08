#pragma once

#include "../Mob"
#include "../../../unmapped/BlockSource"


class MoveToWaterGoal : BaseMoveToBlockGoal {

public:
    virtual MoveToWaterGoal::~MoveToWaterGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);

    MoveToWaterGoal(Mob &, float, int, int, int, float);
};
