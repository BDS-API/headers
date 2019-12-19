#pragma once

class MoveToVillageGoal : BaseMoveToGoal {

public:
    virtual MoveToVillageGoal::~MoveToVillageGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _moveToBlock(void);
    virtual void _selectRandomPosInVillage(void);

    MoveToVillageGoal(Mob &, float, float, float, int);
    void _tryGetCurrentVillage(void);
};
