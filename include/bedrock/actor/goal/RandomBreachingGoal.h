#pragma once

#include <string>
#include "RandomStrollGoal.h"


class RandomBreachingGoal : RandomStrollGoal {

public:
    ~RandomBreachingGoal(); // _ZN19RandomBreachingGoalD2Ev
    virtual bool canUse(); // _ZN19RandomBreachingGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN19RandomBreachingGoal16canContinueToUseEv
    virtual bool canBeInterrupted(); // _ZN19RandomBreachingGoal16canBeInterruptedEv
    virtual void start(); // _ZN19RandomBreachingGoal5startEv
    virtual void stop(); // _ZN19RandomBreachingGoal4stopEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK19RandomBreachingGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void _setWantedPosition(); // _ZN19RandomBreachingGoal18_setWantedPositionEv
    RandomBreachingGoal(Mob &, float, int, int, int, float); // _ZN19RandomBreachingGoalC2ER3Mobfiiif
};
