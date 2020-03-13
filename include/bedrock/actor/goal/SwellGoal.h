#pragma once

#include <string>
#include "Goal.h"


class SwellGoal : Goal {

public:
    ~SwellGoal(); // _ZN9SwellGoalD2Ev
    virtual bool canUse(); // _ZN9SwellGoal6canUseEv
    virtual void start(); // _ZN9SwellGoal5startEv
    virtual void stop(); // _ZN9SwellGoal4stopEv
    virtual void tick(); // _ZN9SwellGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK9SwellGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SwellGoal(Creeper *, float, float); // _ZN9SwellGoalC2EP7Creeperff
};
