#pragma once

#include <string>
#include "DoorInteractGoal.h"


class BreakDoorGoal : DoorInteractGoal {

public:
    ~BreakDoorGoal();
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    virtual void tick();
    BreakDoorGoal(Mob &);
    void getBreakRate()const;
};
