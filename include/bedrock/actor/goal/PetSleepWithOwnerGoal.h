#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"


class PetSleepWithOwnerGoal : BaseMoveToBlockGoal {

public:
    static long SETTLE_TICKS;
    static long WAIT_TICKS;

    ~PetSleepWithOwnerGoal(); // _ZN21PetSleepWithOwnerGoalD2Ev
    virtual bool canUse(); // _ZN21PetSleepWithOwnerGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN21PetSleepWithOwnerGoal16canContinueToUseEv
    virtual void start(); // _ZN21PetSleepWithOwnerGoal5startEv
    virtual void stop(); // _ZN21PetSleepWithOwnerGoal4stopEv
    virtual void tick(); // _ZN21PetSleepWithOwnerGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK21PetSleepWithOwnerGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool isValidTarget(BlockSource &, BlockPos const&); // _ZN21PetSleepWithOwnerGoal13isValidTargetER11BlockSourceRK8BlockPos
    virtual void _nextStartTick(); // _ZN21PetSleepWithOwnerGoal14_nextStartTickEv
    virtual void _moveToBlock(); // _ZN21PetSleepWithOwnerGoal12_moveToBlockEv
    virtual void findTargetBlock(); // _ZN21PetSleepWithOwnerGoal15findTargetBlockEv
    PetSleepWithOwnerGoal(Mob &, float, int, int, float); // _ZN21PetSleepWithOwnerGoalC2ER3Mobfiif
};
