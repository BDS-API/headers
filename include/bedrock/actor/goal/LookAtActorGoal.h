#pragma once

#include <string>
#include "Goal.h"


class LookAtActorGoal : Goal {

public:
    ~LookAtActorGoal(); // _ZN15LookAtActorGoalD2Ev
    virtual bool canUse(); // _ZN15LookAtActorGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15LookAtActorGoal16canContinueToUseEv
    virtual void start(); // _ZN15LookAtActorGoal5startEv
    virtual void stop(); // _ZN15LookAtActorGoal4stopEv
    virtual void tick(); // _ZN15LookAtActorGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15LookAtActorGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getFilter(); // _ZN15LookAtActorGoal9getFilterEv
    LookAtActorGoal(Mob &, float, float, int, int, int, int); // _ZN15LookAtActorGoalC2ER3Mobffiiii
    void _withinFieldOfView(Actor &); // _ZN15LookAtActorGoal18_withinFieldOfViewER5Actor
};
