#pragma once

#include <string>
#include "Goal.h"


class OcelotAttackGoal : Goal {

public:
    ~OcelotAttackGoal(); // _ZN16OcelotAttackGoalD2Ev
    virtual bool canUse(); // _ZN16OcelotAttackGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN16OcelotAttackGoal16canContinueToUseEv
    virtual void stop(); // _ZN16OcelotAttackGoal4stopEv
    virtual void tick(); // _ZN16OcelotAttackGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK16OcelotAttackGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    OcelotAttackGoal(Mob &, float, float, float); // _ZN16OcelotAttackGoalC2ER3Mobfff
};
