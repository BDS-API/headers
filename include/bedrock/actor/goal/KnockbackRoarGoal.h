#pragma once

#include <string>
#include "../../definition/DefinitionTrigger.h"
#include "Goal.h"


class KnockbackRoarGoal : Goal {

public:
    ~KnockbackRoarGoal(); // _ZN17KnockbackRoarGoalD2Ev
    virtual bool canUse(); // _ZN17KnockbackRoarGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN17KnockbackRoarGoal16canContinueToUseEv
    virtual void start(); // _ZN17KnockbackRoarGoal5startEv
    virtual void stop(); // _ZN17KnockbackRoarGoal4stopEv
    virtual void tick(); // _ZN17KnockbackRoarGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK17KnockbackRoarGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    KnockbackRoarGoal(Mob &, int, int, int, int, int, ActorFilterGroup const&, ActorFilterGroup const&, DefinitionTrigger, float); // _ZN17KnockbackRoarGoalC2ER3MobiiiiiRK16ActorFilterGroupS4_17DefinitionTriggerf
};
