#pragma once

#include <string>
#include "Goal.h"


class ReceiveLoveGoal : public Goal {

public:
    virtual ~ReceiveLoveGoal(); // _ZN15ReceiveLoveGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN15ReceiveLoveGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15ReceiveLoveGoal16canContinueToUseEv
    virtual void tick(); // _ZN15ReceiveLoveGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15ReceiveLoveGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ReceiveLoveGoal(VillagerBase &); // _ZN15ReceiveLoveGoalC2ER12VillagerBase
};
