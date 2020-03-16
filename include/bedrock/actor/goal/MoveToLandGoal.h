#pragma once

#include "BaseMoveToBlockGoal.h"
#include <string>


class MoveToLandGoal : public BaseMoveToBlockGoal {

public:
    virtual ~MoveToLandGoal(); // _ZN14MoveToLandGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN14MoveToLandGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN14MoveToLandGoal16canContinueToUseEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK14MoveToLandGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool isValidTarget(BlockSource &, BlockPos const&); // _ZN14MoveToLandGoal13isValidTargetER11BlockSourceRK8BlockPos
    virtual void _moveToBlock(); // _ZN14MoveToLandGoal12_moveToBlockEv
    MoveToLandGoal(Mob &, float, int, int, int, float); // _ZN14MoveToLandGoalC2ER3Mobfiiif
};
