#pragma once

#include <string>
#include "Goal.h"


class WitherDoNothingGoal : public Goal {

public:
    virtual ~WitherDoNothingGoal(); // _ZN19WitherDoNothingGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN19WitherDoNothingGoal6canUseEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK19WitherDoNothingGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    WitherDoNothingGoal(WitherBoss &); // _ZN19WitherDoNothingGoalC2ER10WitherBoss
};
