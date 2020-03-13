#pragma once

#include "Goal.h"


class BaseMoveToGoal : Goal {

public:
    ~BaseMoveToGoal(); // _ZN14BaseMoveToGoalD2Ev
    virtual bool canUse(); // _ZN14BaseMoveToGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN14BaseMoveToGoal16canContinueToUseEv
    virtual void start(); // _ZN14BaseMoveToGoal5startEv
    virtual void stop(); // _ZN14BaseMoveToGoal4stopEv
    virtual void tick(); // _ZN14BaseMoveToGoal4tickEv
    virtual bool hasReachedTarget()const; // _ZNK14BaseMoveToGoal16hasReachedTargetEv
    virtual void _nextStartTick(); // _ZN14BaseMoveToGoal14_nextStartTickEv
    virtual void _canReach(BlockPos const&); // _ZN14BaseMoveToGoal9_canReachERK8BlockPos
    virtual void _getTargetPosition()const; // _ZNK14BaseMoveToGoal18_getTargetPositionEv
    virtual void _getRepathTime()const; // _ZNK14BaseMoveToGoal14_getRepathTimeEv
    BaseMoveToGoal(Mob &, float, float, float, int, int); // _ZN14BaseMoveToGoalC2ER3Mobfffii
    void setTargetPositionOffset(Vec3 const&); // _ZN14BaseMoveToGoal23setTargetPositionOffsetERK4Vec3
    void _isCooldownActive()const; // _ZNK14BaseMoveToGoal17_isCooldownActiveEv
    void _tickCooldown(); // _ZN14BaseMoveToGoal13_tickCooldownEv
    void _checkIfStuck(); // _ZN14BaseMoveToGoal13_checkIfStuckEv
    void setInterval(int); // _ZN14BaseMoveToGoal11setIntervalEi
    void _blockAboveTarget()const; // _ZNK14BaseMoveToGoal17_blockAboveTargetEv
};
