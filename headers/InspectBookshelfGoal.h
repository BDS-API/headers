#pragma once

class InspectBookshelfGoal : BaseMoveToBlockGoal {

public:
    virtual ~InspectBookshelfGoal();
    virtual bool canContinueToUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _canReach(BlockPos const&);
    virtual void findTargetBlock(void);

    void InspectBookshelfGoal(Mob &, float, int, int, int, float);
};
