#pragma once

#include <string>
#include "Goal.h"


class FindCoverGoal : Goal {

public:
    ~FindCoverGoal(); // _ZN13FindCoverGoalD2Ev
    virtual bool canUse(); // _ZN13FindCoverGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN13FindCoverGoal16canContinueToUseEv
    virtual void start(); // _ZN13FindCoverGoal5startEv
    virtual void stop(); // _ZN13FindCoverGoal4stopEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK13FindCoverGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    FindCoverGoal(Mob &, float, float); // _ZN13FindCoverGoalC2ER3Mobff
    void getHidePos(Vec3 *)const; // _ZNK13FindCoverGoal10getHidePosEP4Vec3
    void getMob()const; // _ZNK13FindCoverGoal6getMobEv
};
