#pragma once

#include <string>
#include "Goal.h"


class SquidFleeGoal : public Goal {

public:
    virtual ~SquidFleeGoal(); // _ZN13SquidFleeGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN13SquidFleeGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN13SquidFleeGoal16canContinueToUseEv
    virtual void start(); // _ZN13SquidFleeGoal5startEv
    virtual void stop(); // _ZN13SquidFleeGoal4stopEv
    virtual void tick(); // _ZN13SquidFleeGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK13SquidFleeGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SquidFleeGoal(Squid &); // _ZN13SquidFleeGoalC2ER5Squid
};
