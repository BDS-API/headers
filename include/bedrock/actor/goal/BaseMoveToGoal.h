#pragma once

#include "../../util/BlockPos.h"
#include "../../util/Vec3.h"
#include "Goal.h"
#include "../Mob.h"


class BaseMoveToGoal : Goal {

public:
    virtual void stop();
    virtual void start();
    virtual void _getRepathTime()const;
    virtual void _canReach(BlockPos const&);
    virtual void _getTargetPosition()const;
    virtual bool hasReachedTarget()const;
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void tick();
    virtual void _nextStartTick();
    ~BaseMoveToGoal();
    void setTargetPositionOffset(Vec3 const&);
    void setInterval(int);
    BaseMoveToGoal(Mob &, float, float, float, int, int);
    void _isCooldownActive()const;
    void _blockAboveTarget()const;
    void _checkIfStuck();
    void _tickCooldown();
};
