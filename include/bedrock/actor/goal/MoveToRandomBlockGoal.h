#pragma once

#include <string>
#include "Goal.h"


class MoveToRandomBlockGoal : Goal {

public:
    ~MoveToRandomBlockGoal(); // _ZN21MoveToRandomBlockGoalD2Ev
    virtual bool canUse(); // _ZN21MoveToRandomBlockGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN21MoveToRandomBlockGoal16canContinueToUseEv
    virtual void start(); // _ZN21MoveToRandomBlockGoal5startEv
    virtual void stop(); // _ZN21MoveToRandomBlockGoal4stopEv
    virtual void tick(); // _ZN21MoveToRandomBlockGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK21MoveToRandomBlockGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    MoveToRandomBlockGoal(Mob &, float, float, float); // _ZN21MoveToRandomBlockGoalC2ER3Mobfff
    void _isValidDestinationBlock(BlockSource &, BlockPos const&); // _ZN21MoveToRandomBlockGoal24_isValidDestinationBlockER11BlockSourceRK8BlockPos
};
