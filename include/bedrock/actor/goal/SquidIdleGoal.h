#pragma once

#include <string>
#include "Goal.h"


class SquidIdleGoal : Goal {

public:
    ~SquidIdleGoal(); // _ZN13SquidIdleGoalD2Ev
    virtual bool canUse(); // _ZN13SquidIdleGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN13SquidIdleGoal16canContinueToUseEv
    virtual void start(); // _ZN13SquidIdleGoal5startEv
    virtual void stop(); // _ZN13SquidIdleGoal4stopEv
    virtual void tick(); // _ZN13SquidIdleGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK13SquidIdleGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SquidIdleGoal(Squid &); // _ZN13SquidIdleGoalC2ER5Squid
};
