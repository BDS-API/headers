#pragma once

#include "DoorInteractGoal.h"
#include "../Mob.h"
#include <string>


class BreakDoorGoal : DoorInteractGoal {

public:
    virtual void tick();
    virtual bool canUse();
    virtual void stop();
    ~BreakDoorGoal();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    BreakDoorGoal(Mob &);
    void getBreakRate()const;
};
