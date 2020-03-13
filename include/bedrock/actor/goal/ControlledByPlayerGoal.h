#pragma once

#include <string>
#include "Goal.h"


class ControlledByPlayerGoal : Goal {

public:
    ~ControlledByPlayerGoal(); // _ZN22ControlledByPlayerGoalD2Ev
    virtual bool canUse(); // _ZN22ControlledByPlayerGoal6canUseEv
    virtual void start(); // _ZN22ControlledByPlayerGoal5startEv
    virtual void stop(); // _ZN22ControlledByPlayerGoal4stopEv
    virtual void tick(); // _ZN22ControlledByPlayerGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK22ControlledByPlayerGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ControlledByPlayerGoal(Mob &); // _ZN22ControlledByPlayerGoalC2ER3Mob
    void _canBeControlledByRider(); // _ZN22ControlledByPlayerGoal23_canBeControlledByRiderEv
};
