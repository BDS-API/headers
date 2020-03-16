#pragma once

#include <string>
#include "Goal.h"


class FindMountGoal : public Goal {

public:
    virtual ~FindMountGoal(); // _ZN13FindMountGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN13FindMountGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN13FindMountGoal16canContinueToUseEv
    virtual void start(); // _ZN13FindMountGoal5startEv
    virtual void stop(); // _ZN13FindMountGoal4stopEv
    virtual void tick(); // _ZN13FindMountGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK13FindMountGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    FindMountGoal(Mob &, float, int, bool, bool, float, int); // _ZN13FindMountGoalC2ER3Mobfibbfi
    bool isInMountRange(); // _ZN13FindMountGoal14isInMountRangeEv
    void getAttackReachSqr(); // _ZN13FindMountGoal17getAttackReachSqrEv
};
