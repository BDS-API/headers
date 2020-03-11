#pragma once

#include "../Mob.h"
#include "./DoorInteractGoal.h"
#include <string>


class BreakDoorGoal : DoorInteractGoal {

public:
    virtual ~BreakDoorGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    BreakDoorGoal(Mob &);
    void getBreakRate()const;
};
