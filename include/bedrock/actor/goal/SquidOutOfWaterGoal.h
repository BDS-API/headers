#pragma once

#include <string>
#include "Goal.h"


class SquidOutOfWaterGoal : public Goal {

public:
    virtual ~SquidOutOfWaterGoal(); // _ZN19SquidOutOfWaterGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN19SquidOutOfWaterGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN19SquidOutOfWaterGoal16canContinueToUseEv
    virtual void start(); // _ZN19SquidOutOfWaterGoal5startEv
    virtual void stop(); // _ZN19SquidOutOfWaterGoal4stopEv
    virtual void tick(); // _ZN19SquidOutOfWaterGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK19SquidOutOfWaterGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SquidOutOfWaterGoal(Squid &); // _ZN19SquidOutOfWaterGoalC2ER5Squid
};
