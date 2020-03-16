#pragma once

#include "FindCoverGoal.h"
#include <string>


class FleeSunGoal : public FindCoverGoal {

public:
    virtual ~FleeSunGoal(); // _ZN11FleeSunGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN11FleeSunGoal6canUseEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK11FleeSunGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    FleeSunGoal(Mob &, float); // _ZN11FleeSunGoalC2ER3Mobf
};
