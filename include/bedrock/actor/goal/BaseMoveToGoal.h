#pragma once

#include "../../../unmapped/BlockPos"
#include "../Mob"
#include "../../../unmapped/Vec3"


class BaseMoveToGoal : Goal {

public:
    virtual BaseMoveToGoal::~BaseMoveToGoal();
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

    BaseMoveToGoal(Mob &, float, float, float, int, int);
    void setTargetPositionOffset(Vec3 const&);
    void _isCooldownActive(void)const;
    void _tickCooldown(void);
    void _checkIfStuck(void);
    void setInterval(int);
    void _blockAboveTarget(void)const;
};
