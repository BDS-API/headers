#pragma once

#include <string>
#include "MoveToVillageGoal.h"


class StrollTowardsVillageGoal : MoveToVillageGoal {

public:
    ~StrollTowardsVillageGoal(); // _ZN24StrollTowardsVillageGoalD2Ev
    virtual bool canUse(); // _ZN24StrollTowardsVillageGoal6canUseEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK24StrollTowardsVillageGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void _selectRandomPosInVillage(); // _ZN24StrollTowardsVillageGoal25_selectRandomPosInVillageEv
    StrollTowardsVillageGoal(Mob &, float, float, float, int, float); // _ZN24StrollTowardsVillageGoalC2ER3Mobfffif
};
