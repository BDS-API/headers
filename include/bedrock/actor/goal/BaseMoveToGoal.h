#pragma once

#include "Goal.h"


class BaseMoveToGoal : Goal {

public:
    virtual void _getTargetPosition()const;
    virtual bool canContinueToUse();
    virtual void stop();
    virtual void _nextStartTick();
    virtual bool canUse();
    virtual void _getRepathTime()const;
    virtual void tick();
    ~BaseMoveToGoal();
    virtual bool hasReachedTarget()const;
    virtual void _canReach(BlockPos const&);
    virtual void start();
    void _checkIfStuck();
    BaseMoveToGoal(Mob &, float, float, float, int, int);
    void _tickCooldown();
    void setTargetPositionOffset(Vec3 const&);
    void setInterval(int);
    void _isCooldownActive()const;
    void _blockAboveTarget()const;
};
