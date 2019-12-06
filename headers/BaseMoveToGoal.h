#pragma once

class BaseMoveToGoal : Goal {

public:
    virtual ~BaseMoveToGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual bool hasReachedTarget(void)const;
    virtual void _nextStartTick(void);
    virtual void _canReach(BlockPos const&);
    virtual void _getTargetPosition(void)const;
    virtual void _getRepathTime(void)const;

    void BaseMoveToGoal(Mob &, float, float, float, int, int);
    void _blockAboveTarget(void)const;
    void setInterval(int);
};
