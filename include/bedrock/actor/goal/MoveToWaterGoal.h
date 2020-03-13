#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"


class MoveToWaterGoal : BaseMoveToBlockGoal {

public:
    ~MoveToWaterGoal(); // _ZN15MoveToWaterGoalD2Ev
    virtual bool canUse(); // _ZN15MoveToWaterGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15MoveToWaterGoal16canContinueToUseEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15MoveToWaterGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool isValidTarget(BlockSource &, BlockPos const&); // _ZN15MoveToWaterGoal13isValidTargetER11BlockSourceRK8BlockPos
    MoveToWaterGoal(Mob &, float, int, int, int, float); // _ZN15MoveToWaterGoalC2ER3Mobfiiif
};
