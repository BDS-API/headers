#pragma once

#include <string>
#include "Goal.h"


class SilverfishWakeUpFriendsGoal : public Goal {

public:
    virtual ~SilverfishWakeUpFriendsGoal(); // _ZN27SilverfishWakeUpFriendsGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN27SilverfishWakeUpFriendsGoal6canUseEv
    virtual void tick(); // _ZN27SilverfishWakeUpFriendsGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK27SilverfishWakeUpFriendsGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SilverfishWakeUpFriendsGoal(Silverfish &); // _ZN27SilverfishWakeUpFriendsGoalC2ER10Silverfish
};
