#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"


class InspectBookshelfGoal : BaseMoveToBlockGoal {

public:
    ~InspectBookshelfGoal(); // _ZN20InspectBookshelfGoalD2Ev
    virtual bool canContinueToUse(); // _ZN20InspectBookshelfGoal16canContinueToUseEv
    virtual void tick(); // _ZN20InspectBookshelfGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK20InspectBookshelfGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool isValidTarget(BlockSource &, BlockPos const&); // _ZN20InspectBookshelfGoal13isValidTargetER11BlockSourceRK8BlockPos
    virtual void _canReach(BlockPos const&); // _ZN20InspectBookshelfGoal9_canReachERK8BlockPos
    virtual void findTargetBlock(); // _ZN20InspectBookshelfGoal15findTargetBlockEv
    InspectBookshelfGoal(Mob &, float, int, int, int, float); // _ZN20InspectBookshelfGoalC2ER3Mobfiiif
};
