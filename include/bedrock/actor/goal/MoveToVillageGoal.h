#pragma once

#include <string>
#include "BaseMoveToGoal.h"


class MoveToVillageGoal : BaseMoveToGoal {

public:
    ~MoveToVillageGoal(); // _ZN17MoveToVillageGoalD2Ev
    virtual bool canUse(); // _ZN17MoveToVillageGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN17MoveToVillageGoal16canContinueToUseEv
    virtual void start(); // _ZN17MoveToVillageGoal5startEv
    virtual void tick(); // _ZN17MoveToVillageGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK17MoveToVillageGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool isValidTarget(BlockSource &, BlockPos const&); // _ZN17MoveToVillageGoal13isValidTargetER11BlockSourceRK8BlockPos
    virtual void _moveToBlock(); // _ZN17MoveToVillageGoal12_moveToBlockEv
    virtual void _selectRandomPosInVillage(); // _ZN17MoveToVillageGoal25_selectRandomPosInVillageEv
    MoveToVillageGoal(Mob &, float, float, float, int); // _ZN17MoveToVillageGoalC2ER3Mobfffi
    void _tryGetCurrentVillage(); // _ZN17MoveToVillageGoal21_tryGetCurrentVillageEv
};
