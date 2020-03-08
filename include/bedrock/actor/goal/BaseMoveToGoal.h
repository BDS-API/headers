#pragma once

#include "../Mob"
#include "../../util/Vec3"
#include "../../util/BlockPos"


class BaseMoveToGoal : Goal {

public:
    BaseMoveToGoal::~BaseMoveToGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual bool hasReachedTarget()const;
    virtual void _nextStartTick();
    virtual void _canReach(BlockPos const&);
    virtual void _getTargetPosition()const;
    virtual void _getRepathTime()const;

    BaseMoveToGoal(Mob &, float, float, float, int, int);
    void setTargetPositionOffset(Vec3 const&);
    void _isCooldownActive()const;
    void _tickCooldown();
    void _checkIfStuck();
    void setInterval(int);
    void _blockAboveTarget()const;
};
