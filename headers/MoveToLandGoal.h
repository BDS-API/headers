#pragma once

class MoveToLandGoal : BaseMoveToBlockGoal {

public:
    virtual ~MoveToLandGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _moveToBlock(void);

    void MoveToLandGoal(Mob &, float, int, int, int, float);
};
